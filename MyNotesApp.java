package myNotesApp;

import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.geometry.Orientation;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.scene.text.Font;
import javafx.scene.text.FontPosture;
import javafx.scene.text.FontWeight;
import javafx.scene.layout.*;
import javafx.scene.web.WebView;
import javafx.stage.FileChooser;
import javafx.stage.Stage;

import java.awt.Desktop;
import java.io.*;

public class MyNotesApp extends Application {

    private TextArea textArea;
    private Label statusBar;
    private File currentFile = null;
    private BorderPane root;
    private ToolBar toolBar;
    private ComboBox<String> typeBox; // Note / HTML
    private ComboBox<String> previewBox; // Preview mode

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) {
        primaryStage.setTitle("💻 Notes & Live HTML Preview");

        // ===== TextArea =====
        textArea = new TextArea();
        textArea.setWrapText(true);
        textArea.setFont(Font.font("Consolas", 14));

        statusBar = new Label("No file opened");
        updateStatus();
        textArea.setOnKeyReleased(e -> updateStatus());

        // ===== Type ComboBox =====
        typeBox = new ComboBox<>();
        typeBox.getItems().addAll("Note", "HTML");
        typeBox.setValue("Note");

        // عند اختيار نوع HTML، يضاف القالب مباشرة
        typeBox.setOnAction(e -> {
            if (typeBox.getValue().equals("HTML")) {
                textArea.setText(
                    "<!DOCTYPE html>\n" +
                    "<html>\n" +
                    "<head>\n" +
                    "<meta charset=\"UTF-8\">\n" +
                    "<title>Title</title>\n" +
                    "</head>\n" +
                    "<body>\n\n" +
                    "</body>\n" +
                    "</html>"
                );
            } else if (typeBox.getValue().equals("Note")) {
                textArea.clear();
            }
        });

        // ===== Preview ComboBox =====
        previewBox = new ComboBox<>();
        previewBox.getItems().addAll("Preview in App", "Preview in Browser");
        previewBox.setValue("Preview in App");

        Button previewBtn = createMinimalBtn("👁️", "Preview HTML", e -> {
            if (!typeBox.getValue().equals("HTML")) return;

            if (previewBox.getValue().equals("Preview in App")) {
                previewHTMLInApp();
            } else {
                previewHTMLInBrowser();
            }
        });
        previewBtn.visibleProperty().bind(typeBox.valueProperty().isEqualTo("HTML"));

        // ===== File Buttons =====
        Button newBtn = createMinimalBtn("🆕", "New", e -> {
            textArea.clear();
            currentFile = null;
            updateStatus();
        });
        Button openBtn = createMinimalBtn("📂", "Open", e -> openFile(primaryStage));
        Button saveBtn = createMinimalBtn("💾", "Save", e -> saveFile(primaryStage, false));
        Button saveAsBtn = createMinimalBtn("📑", "Save As", e -> saveFile(primaryStage, true));
        Button clearBtn = createMinimalBtn("🧹", "Clear", e -> textArea.clear());

        // ===== Theme Buttons =====
        Button darkBtn = createMinimalBtn("🌙", "Dark", e ->
                textArea.setStyle("-fx-control-inner-background: #1e1e1e; -fx-text-fill: #d4d4d4;"));
        Button lightBtn = createMinimalBtn("☀", "Light", e ->
                textArea.setStyle("-fx-control-inner-background: white; -fx-text-fill: black;"));

        // ===== Font Controls =====
        ComboBox<String> fontBox = new ComboBox<>();
        fontBox.getItems().addAll("Consolas", "Arial", "Courier New", "Verdana", "Times New Roman");
        fontBox.setValue("Consolas");
        fontBox.setOnAction(e -> applyFontChange(fontBox.getValue(), -1));

        ComboBox<Integer> sizeBox = new ComboBox<>();
        sizeBox.getItems().addAll(10, 12, 14, 16, 18, 20, 24, 28);
        sizeBox.setValue(14);
        sizeBox.setOnAction(e -> applyFontChange(null, sizeBox.getValue()));

        Button boldBtn = createMinimalBtn("𝐁", "Bold", e -> toggleStyle(FontWeight.BOLD));
        Button italicBtn = createMinimalBtn("𝑰", "Italic", e -> toggleStyle(FontPosture.ITALIC));

        // ===== About =====
        Button aboutBtn = createMinimalBtn("ℹ", "About", e ->
                showAlert("About", "📝 Notes App\nBy Mohammad Azmi"));

        // ===== ToolBar =====
        toolBar = new ToolBar(newBtn, openBtn, saveBtn, saveAsBtn, clearBtn, new Separator(),
                darkBtn, lightBtn, new Separator(),
                new Label("Font:"), fontBox, new Label("Size:"), sizeBox, boldBtn, italicBtn,
                new Separator(), typeBox, previewBox, previewBtn, new Separator(), aboutBtn);

        // ===== Layout Box =====
        ComboBox<String> layoutBox = new ComboBox<>();
        layoutBox.getItems().addAll("Top", "Bottom", "Left", "Right");
        layoutBox.setValue("Top");
        layoutBox.setOnAction(e -> changeToolBarPosition(layoutBox.getValue()));

        toolBar.getItems().add(new Separator());
        toolBar.getItems().add(new Label("🔧 Layout:"));
        toolBar.getItems().add(layoutBox);

        // ===== Root =====
        root = new BorderPane();
        root.setTop(toolBar);
        root.setCenter(textArea);
        root.setBottom(statusBar);
        BorderPane.setMargin(statusBar, new Insets(3));

        Scene scene = new Scene(root, 950, 600);
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    private void previewHTMLInApp() {
        Stage previewStage = new Stage();
        WebView webView = new WebView();
        String htmlContent = textArea.getText();
        webView.getEngine().loadContent(htmlContent);
        Scene scene = new Scene(webView, 800, 600);
        previewStage.setScene(scene);
        previewStage.setTitle("HTML Preview");
        previewStage.show();
    }

    private void previewHTMLInBrowser() {
        try {
            File tempFile = File.createTempFile("preview", ".html");
            try (BufferedWriter writer = new BufferedWriter(new FileWriter(tempFile))) {
                writer.write(textArea.getText());
            }
            Desktop.getDesktop().browse(tempFile.toURI());
        } catch (IOException ex) {
            showAlert("Error", "Cannot open preview in browser.");
        }
    }

    private Button createMinimalBtn(String icon, String tooltip, javafx.event.EventHandler<javafx.event.ActionEvent> action) {
        Button btn = new Button(icon);
        btn.setTooltip(new Tooltip(tooltip));
        btn.setStyle(
                "-fx-background-color: transparent;" +
                        "-fx-font-size: 14px;" +
                        "-fx-cursor: hand;" +
                        "-fx-padding: 4px;"
        );
        btn.setOnAction(action);
        return btn;
    }

    private void applyFontChange(String family, int size) {
        String fontFamily = (family != null) ? family : textArea.getFont().getFamily();
        int fontSize = (size > 0) ? size : (int) textArea.getFont().getSize();
        textArea.setFont(Font.font(fontFamily, fontSize));
    }

    private void toggleStyle(Object style) {
        Font current = textArea.getFont();
        String family = current.getFamily();
        double size = current.getSize();
        if (style instanceof FontWeight) {
            textArea.setFont(Font.font(family, (FontWeight) style, current.getStyle().contains("Italic") ? FontPosture.ITALIC : FontPosture.REGULAR, size));
        } else if (style instanceof FontPosture) {
            textArea.setFont(Font.font(family, current.getStyle().contains("Bold") ? FontWeight.BOLD : FontWeight.NORMAL, (FontPosture) style, size));
        }
    }

    private void changeToolBarPosition(String pos) {
        root.setTop(null);
        root.setBottom(null);
        root.setLeft(null);
        root.setRight(null);
        if (pos.equals("Top")) {
            toolBar.setOrientation(Orientation.HORIZONTAL);
            root.setTop(toolBar);
        } else if (pos.equals("Bottom")) {
            toolBar.setOrientation(Orientation.HORIZONTAL);
            root.setBottom(toolBar);
        } else if (pos.equals("Left")) {
            toolBar.setOrientation(Orientation.VERTICAL);
            root.setLeft(toolBar);
        } else if (pos.equals("Right")) {
            toolBar.setOrientation(Orientation.VERTICAL);
            root.setRight(toolBar);
        }
    }

    private void openFile(Stage stage) {
        FileChooser fileChooser = new FileChooser();
        fileChooser.setTitle("Open File");
        fileChooser.getExtensionFilters().addAll(
                new FileChooser.ExtensionFilter("Text Files", "*.txt"),
                new FileChooser.ExtensionFilter("HTML Files", "*.html")
        );
        File file = fileChooser.showOpenDialog(stage);
        if (file != null) {
            try (BufferedReader reader = new BufferedReader(new FileReader(file))) {
                textArea.clear();
                String line;
                while ((line = reader.readLine()) != null) {
                    textArea.appendText(line + "\n");
                }
                currentFile = file;
                updateStatus();
            } catch (IOException e) {
                showAlert("Error", "Cannot open file.");
            }
        }
    }

    private void saveFile(Stage stage, boolean saveAs) {
        if (currentFile == null || saveAs) {
            FileChooser fileChooser = new FileChooser();
            fileChooser.setTitle("Save File As");
            fileChooser.getExtensionFilters().addAll(
                    new FileChooser.ExtensionFilter("Text Files", "*.txt"),
                    new FileChooser.ExtensionFilter("HTML Files", "*.html")
            );
            fileChooser.setInitialFileName("notes.txt");
            File file = fileChooser.showSaveDialog(stage);
            if (file != null) currentFile = file;
            else return;
        }
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(currentFile))) {
            if (currentFile.getName().endsWith(".html")) {
                writer.write("<!DOCTYPE html><html><head><meta charset=\"UTF-8\"></head><body><pre>"
                        + textArea.getText() + "</pre></body></html>");
            } else {
                writer.write(textArea.getText());
            }
            updateStatus();
        } catch (IOException e) {
            showAlert("Error", "Cannot save file.");
        }
    }

    private void updateStatus() {
        String text = textArea.getText().trim();
        int words = text.isEmpty() ? 0 : text.split("\\s+").length;
        int chars = textArea.getText().length();
        String fileName = (currentFile == null) ? "Untitled" : currentFile.getName();
        statusBar.setText(fileName + " | Words: " + words + " | Characters: " + chars);
    }

    private void showAlert(String title, String content) {
        Alert alert = new Alert(Alert.AlertType.INFORMATION);
        alert.setTitle(title);
        alert.setHeaderText(null);
        alert.setContentText(content);
        alert.showAndWait();
    }
}
