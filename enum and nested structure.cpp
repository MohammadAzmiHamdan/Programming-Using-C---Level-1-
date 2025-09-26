#include <iostream>
using namespace std;
enum enColor{red,blue,green};
enum enMajor{CS,CIS,CYS,AI,DS,BIT};
struct stCar {
	string brand;
	int date;
	string model;
};
struct stPC {
	string brand;
	string model;
	int date;
};
struct stAdress {
	string StreetName;
	string city;
	int POBOX;
	string BuildingNo;
};
struct stcontactinfo {
	string  phonenumber;
	string Email;
	stAdress Adress;

};
struct stPerson {
	string firstName;
	string LastName;
	stcontactinfo contact;
	stPC PC;
	stCar car;
	enMajor Major;
};
int main() {

	stPerson student1;
	student1.firstName = "Mohammad";
	student1.LastName = "Hamdan";
	student1.Major = enMajor::CIS;
	student1.contact.Adress.BuildingNo = 317;
	student1.contact.Adress.city = "AL-Zarqaa";
	student1.contact.Adress.POBOX = 123;
	student1.contact.Adress.StreetName = "Maka street";
	student1.contact.Email = "asq2@asz.com";
	student1.contact.phonenumber="08312311321";
	student1.car.brand = "tesla";
	student1.car.model = 'Y';
	student1.car.date = 2026;
	student1.PC.brand = "lenovo";
	student1.PC.model = "g510";
	student1.PC.date = 2014;



	cout << student1.firstName << "  " << student1.LastName << endl;
	cout << student1.Major << endl;
	cout << student1.contact.Adress.BuildingNo << endl;
	cout << student1.contact.Adress.city << endl;
	cout << student1.contact.Adress.POBOX << endl;
	cout << student1.contact.Adress.StreetName << endl;
	cout << student1.contact.Email << endl;
	cout << student1.contact.phonenumber << endl;
	cout << student1.PC.brand<<"  " << student1.PC.model<<" "<< student1.PC.date<< endl;
	cout << student1.car.brand << "  " << student1.car.model << " " << student1.car.date << endl;

}