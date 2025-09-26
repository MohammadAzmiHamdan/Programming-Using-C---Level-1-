
#include <iostream>
using namespace std;
struct strinfo {
	string FirstName;
	string LastName;

	short age;
	string phoneNumber;





};
void ReadInfo(strinfo& info) {
	cout << " \n*******************************\n";
	cout << " please enter first name \n";
	cin >> info.FirstName;
	cout << " please enter last name \n";
	cin >> info.LastName;
	cout << " please enter person age \n";
	cin >> info.age;
	cout << " please enter person phone number \n";
	cin >> info.phoneNumber;


}
void PrintInfo(strinfo info) {
	cout << "\n****************************\n";
	cout << "first name : " << info.FirstName << endl;
	cout << " least name :" << info.LastName << endl;
	cout << " age : " << info.age << endl;
	cout << " phone number :" << info.phoneNumber << endl;
	cout << "\n****************************\n";



}
void ReadPersonsinfo(strinfo info[100],int &length) {

	cout << " how many numbers you want ? from 1 to 100 : \n";
	cin >> length;
	for (int i = 0;i <= length - 1;i++)
	{
		cout << "please enter the " << i + 1 << "  person's info : \n";
		ReadInfo(info[i]);
		cout << endl << endl;
	}



}
void PrintPersonInfo(strinfo info[100], int length) {
	for (int i = 0;i <= length - 1;i++) {
		
		cout << " \n person's " << i + 1 << " info \n";
		PrintInfo(info[i]);
		cout << endl << endl;
	}
}
using namespace std;
int main()
{
	system("color F1");
	strinfo people[100]; int length = 0;
	ReadPersonsinfo(people, length);
	PrintPersonInfo(people,length);












}