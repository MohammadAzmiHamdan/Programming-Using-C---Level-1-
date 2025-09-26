


#include <iostream>
#include <string>
using namespace std;
enum enStatus { Single, Maried  };
enum enGender { Male, Female};

struct strInfo {
	string FullName;
	short Age;
	string City;
	string Country;
	int  MonthlySalary;
	int YearlySalary;
	enGender Gender;

	enStatus MaritalStatus;

};
void ReadInfo(strInfo& info) {
	
	cout << "please enter your full name : \n";
	cin.ignore();
	getline(cin, info.FullName);
	cout << "please enter your age : \n";
	cin >> info.Age;
	cout << "please enter your city : \n";
	cin >> info.City;
	cout << "please enter your country : \n";
	cin >> info.Country;
	cout << "please enter your monthly salary  : \n";
	cin >> info.MonthlySalary;
	info.YearlySalary = info.MonthlySalary * 12;

	cout << "please enter your Gender  (Male/Female) : \n";
	string 	GenderInPut;
	cin >> GenderInPut;

		
	if (GenderInPut == "Male" || GenderInPut == "male") {
		info.Gender = enGender::Male;
	}
	else if (GenderInPut == "Female" || GenderInPut == "female")
	{
		info.Gender = enGender::Female;

	}
	else cout << " invalid in put !!!!\n";

	cout << "please enter your Marital Status (Maried/Single) : \n";
	string 	MaritalStatus_InPut;
	cin >> MaritalStatus_InPut;

	if (MaritalStatus_InPut == "Maried" || MaritalStatus_InPut == "maried") {
		info.MaritalStatus = enStatus::Maried;
	}
	else if (MaritalStatus_InPut == "Single" || MaritalStatus_InPut == "single")
	{
		info.MaritalStatus = enStatus::Single;

	}
	else cout << " invalid in put !!!!\n";




}
void PrintInfo(strInfo info) {
	cout << "\n**********************************************************\n";
	cout << "Name : " << info.FullName<<endl;
	cout << "Age : " << info.Age<<endl;
	cout << "City : " << info.City<<endl;
	cout << "Country : " << info.Country<<endl;
	cout << "Monthly Salary: " << info.MonthlySalary<<endl;
	cout << "Yearly Salary: " << info.YearlySalary<<endl;


	if (info.Gender == Male) {
		cout << "Gender : Male" << endl;
	}
	else if (info.Gender == Female)
	{
		cout << "Gender : Female" << endl;

	}
	if (info.MaritalStatus == Maried) {
		cout << "Marital Status : Maried" << endl;
	}
	else if (info.MaritalStatus == Single)
	{
		cout << "Marital Status : Single" << endl;
	}
	cout << "\n**********************************************************\n";







}
int main()
{
	strInfo person1;
	ReadInfo(person1);
	PrintInfo(person1);



	strInfo person2;
	ReadInfo(person2);
	PrintInfo(person2);





	strInfo person3;
	ReadInfo(person3);
	PrintInfo(person3);

}