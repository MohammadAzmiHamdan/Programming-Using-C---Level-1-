
#include <iostream>
#include <string >
using namespace std;
struct strCardInfo {
	int PIN;
	string name;
	int balance=7500;




};
void ReadInfo(strCardInfo& info) {

	cout << " please enter your name \n ";
	cin.ignore();
	getline(cin ,info.name);



}
void ReadPIN(strCardInfo& info ) {
	
	cout << " please enter your PIN \n ";
	cin >> info.PIN;



 }
bool CheckPIN(strCardInfo &info) {

	int counter = 3;
	 while (counter > 0)
	{
		 if (info.PIN == 1234)
		 {
			 return true;
		 }
		 else {
			 counter--;
			 cout << "\n========================\n";
			 cout << "Wrong PIN!" << endl;
			 if (counter > 0) {
				 cout << "You have " << counter << " attempt(s) left." << endl;
				 ReadPIN(info);

			 }
		 }
	}
	 cout << " card blocked ! \n " << endl;
	 return false;

	 




}
void displayBalance(strCardInfo &info) {
	ReadInfo(info);
	ReadPIN(info);
	if (CheckPIN(info)) {
		cout << "\n=====\n" << endl;
		cout << "Dear " << info.name << endl;
		cout << "Your balance is " << info.balance << endl;
	} 



}
int main()
{
	strCardInfo pesron1;
	displayBalance(pesron1);










}