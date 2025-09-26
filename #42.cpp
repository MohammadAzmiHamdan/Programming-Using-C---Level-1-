// #42.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "please enter the  days :\n";
    float days, hours, minutes, seconds;
    cin >> days;
    cout << "please enter the hours  :\n";
    cin >> hours;
    cout << "please enter the minutes :\n";
    cin >> minutes;
    cout << "please enter the second :\n";
    cin >> seconds;
    float totalseconds = days * 24 * 60 * 60 + hours * 60 * 60 + minutes * 60 + seconds * 1;
    cout << "the total seconds = " <<round( totalseconds) << endl;
    return 0;

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
