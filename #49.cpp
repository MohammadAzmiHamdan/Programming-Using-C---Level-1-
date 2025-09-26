
#include <iostream>
using namespace std;
void ReadPIN(int& PIN) {
    cout << " please enter your PIN \n ";
    cin >> PIN;


}
int balance = 7500;
bool checkPIN(int &PIN) {
    if( PIN == 1234){
       
        return true;
    }
    else {
        cout << " invalid pin you have 5 time left to enter the corect one \n";
        int count = 5;
        while (count) {
            count--;
            ReadPIN(PIN);
            if (PIN == 1234) {

                return true;
            }
            else if (PIN!=1234) {
                cout << "you have " << count << " time left";
                
            }



        }
           
        if (PIN != 1234)return false;



    }



}
void printBalance(bool valid) {
    if(valid) cout << "balance is " << balance;
    else cout << " invalid PIN !!!!";

}

int main()
{
    int pin;
    ReadPIN(pin);

    printBalance(checkPIN(pin));


}
