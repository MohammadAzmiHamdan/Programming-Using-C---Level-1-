// #35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "please enter total  pennies:\n";
    float Penny, Nickel, Dime, Quarter, Dollar ;
    cin >> Penny;
    cout << "please enter total Nickel: \n";
    cin >> Nickel;
    cout << "please enter total Dime:\n";
    cin >> Dime;
    cout << "please enter total Quarter: \n";
    cin >> Quarter;
    cout << "please enter total Dollar:\n";
    cin >> Dollar;
    float TotalPennies = Penny + Nickel * 5 + Dime * 10 + Quarter * 25 + Dollar * 100;
    float TotalDollars = TotalPennies / 100;
    cout << TotalPennies << "Pennies\n";
    cout << TotalDollars << "Dollars"<<endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
