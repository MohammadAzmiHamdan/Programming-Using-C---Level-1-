
#include <iostream>
#include <string>
using namespace std;
void PrintMycard() {

	cout << "Name    : mohammad azmi mohammad hamdan " << endl;
	cout << "Age     : 20 " << endl;
	cout << "City    : AL-Zarqaa " << endl;
	cout << "Country : jordan " << endl;
}
void Print_4_Rows_Of_Stars() {
	for (int x = 0;x < 4;x++) {
		for (int y = 0;y < 9;y++) { cout << "*"; }
		cout << endl;
	}

}
void PrintILoveProgramming() { cout << " I Love Programming\n"; }
void Print_H_By_Stars() { cout << "*		*\n";cout << "*		*\n";
cout << "*		*\n";
cout << "*		*\n";
cout << "*****************\n";cout << "*		*\n";cout << "*		*\n";cout << "*		*\n";cout << "*		*\n";
}

int main()
{
	PrintMycard();
	Print_4_Rows_Of_Stars();
	PrintILoveProgramming();
	Print_H_By_Stars();
	char newline ;
	string Major;
	string FUllName;
	cin >> Major;
	cin.ignore(1, '\n');
	//----OR------>>> cin.get(newline);
	getline(cin, FUllName);
	cout << FUllName <<//<<newline<<
		 Major << endl;
}