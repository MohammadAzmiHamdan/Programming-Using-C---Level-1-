
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "please enter string1 :  \n";
	string string1;
	getline(cin, string1);
	cout << "please enter string2 :  \n";
	string string2;
	getline(cin, string2);
	cout << "please enter string3 :  \n";
	string string3;
	getline(cin, string3);
	cout << "\n*************************************\n";
	cout << "the length of string1 = " << string1.length() << endl;
	cout <<"Caracters at 0,2,4,7 are : "<< string1[0] << " " << string1[2] << " " << string1[4] << " " << string1[7] << endl;
	cout << "concatenating of string2 and string3 is :  "
		<< string2 + string3 << endl;
	cout << (stoi(string2) * stoi(string3)) << endl;

}