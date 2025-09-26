
#include <iostream>
#include <string>

using namespace std;
void GetFullName(string &name) {
	
	cout << "Please Enter Your Name : \n" << endl;
	getline(cin, name);
	cout << endl;
}
void PrintName(string name)
{ cout << name << endl; }
void GetNumber(float& num)
{
	
	cout << "please enter a number : \n"; cin >> num;
	while (true) {
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "PLEASE ENTER A NUMBER !!!! \n";
			cin >> num;
			continue;
		}
		if (num <= 0) 
		{ cout << "PLEASE ENTER A POSITVE NUMBER : \n";
		cin >> num;
		continue; }
		if (num != int(num)) { cout << "please enter an integer number !\n";
		cin >> num; }
		else break;
	}
	}

string Is_ODD_or_EVEN(int num) {
	if (num % 2 == 0) {
		return " Is Even ";
	}
	else return " Is Odd ";
}

int main()
{
	string name;
	GetFullName(name);
	PrintName(name);

	float num;
	GetNumber(num);
	cout << "The "<<num<<" :"<<Is_ODD_or_EVEN(num) << endl;
	

}

