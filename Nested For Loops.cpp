
#include <iostream>
using namespace std;
void printShape1() {

    for (int l = 65;l <= 90;l++) {
        cout << " Letter : " << char(l) << endl;
        for (int x = 65;x <= 90;x++)

            cout << char(l) <<char( x ) << endl;

        cout << "----------------\n";


    }




}
void printSape2() {

    for (int i = 10;i >= 1;i--) {
        for (int j = 1;j <= i;j++)
            cout << "*";
        cout << endl;

    }



}
void printShape3() {

    for (int i = 10;i >= 1;i--) {
        for (int j = 1;j <= i;j++)
            cout << j;
        cout << endl;

    }

}
void printShape4() {
    for (int i = 1;i <= 10;i++) {
        for (int j = 1;j <= i;j++)
            cout << j;
        cout << endl;

    }

}
void printShape5() {
   
    for (int i = 65;i <= 70;i++) {
        for (int j = 65;j <= i;j++)
            cout << char(j)<<" ";
        cout << endl;

    } //or 
      /*for (int i = 1;i <= 6;i++) {
        for (int j = 0;j < i;j++)
            cout << char(65 + j);
        cout << endl;

    }*/

}
void printshape6(){

    for (int i = 1;i <= 10;i++) {
        for (int j = i;j <= 10;j++) {
            cout << j << " " ;
        }
        cout << endl;
    }
   





}
int main()
{
   // printShape1();
   // printSape2();
    //printShape3();
    //printShape4();
    //printShape5();
   //printshape6();
}