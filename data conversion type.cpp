
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1 = "12.12";
	int x = stoi(str1);
	double z = stod(str1);
	float r = stof(str1);
	cout << x << " " << z << " " << r << endl;
	string d = to_string(20);
	string t = to_string(33.5);
	string q = to_string(55.23);
	int o = int(55.23);
	cout << d<< " " << t<< " " << q <<" "<<o<< endl;


}