
#include <iostream>
using namespace std;
enum enScreenColor{red=1,blue=2,green=3,yallow=4};

int main()
{
	int c;
    cout << "****************************\n";
    cout << "Please Chose the number of your color?\n";
    cout << "(1) Red\n";
    cout << "(2) Blue\n";
    cout << "(3) Green\n";
    cout << "(4) Yellow\n";
    cout << "****************************\n\n";
    cout << "Your Choice? ";
    cin >> c;
    enScreenColor color = (enScreenColor)c;
    if(color==enScreenColor::red)
        system("color 4F");
    else if (color == enScreenColor::blue)
        system("color 1F");
    else if (color == enScreenColor::green)
        system("color 2F");
    else if (color == enScreenColor::yallow)
        system("color 6F");
    else

    {
        system("color 4F");
    }
    enum enCountryChoice { Jordan = 1, Palestine = 2, Algeria = 3, Oman = 4, Egypt = 5, Iraq = 6, Other = 7 };
    cout << "****************************\n";
    cout << "Please Enter the number of your country?\n";
    cout << "(1) Jordan\n";
    cout << "(2) Palestine\n";
    cout << "(3) Algeria\n";
    cout << "(4) Oman\n";
    cout << "(5) Egypt\n";
    cout << "(6) Iraq\n";
    cout << "(7) Other\n";
    cout << "****************************\n\n";
    cout << "Your Choice? ";


    enCountryChoice Coutnry;


    cin >> c;
    Coutnry = (enCountryChoice)c;


    if (Coutnry == enCountryChoice::Jordan)
    {
        cout << "Your country is Jordan\n";


    }
    else if (Coutnry == enCountryChoice::Palestine)
    {
        cout << "Your country is Palestine\n";
    }
    else if (Coutnry == enCountryChoice::Algeria)
    {
        cout << "Your country is Algeria\n";
    }
    else if (Coutnry == enCountryChoice::Oman)
    {
        cout << "Your country is Oman\n";
    }
    else if (Coutnry == enCountryChoice::Egypt)
    {
        cout << "Your country is Egypt\n";
    }
    else if (Coutnry == enCountryChoice::Iraq)
    {
        cout << "Your country is Iraq\n";
    }
    else

    {

        cout << "Your country is Other\n";
    };





}