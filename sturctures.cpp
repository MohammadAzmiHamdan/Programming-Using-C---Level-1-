#include <iostream>
using namespace std;
enum gender { Male, Female };
enum  status {
	single, married
};
struct salary {
	int MonthlySalary = 0;
	int getYearlySalary() {
		return MonthlySalary * 12;
	}
};
struct employees {
	string name;
	short age;
	string country;
	string nationality;
	string city;
	gender Gender;
	status status;
	salary Salary;

};




int main() {
	employees employee1;
	employee1.name = "MOHAMMAD HAMDAN";
	employee1.age = 20;
	employee1.city = "Al-Zarqaa";
	employee1.country = "jordan";
	employee1.nationality="palestine";
	employee1.Gender = gender::Male;
	employee1.status = status::single;
	employee1.Salary.MonthlySalary= 900;
	
	cout << "Name : " << employee1.name << endl;
	cout << "Age : " << employee1.age << endl;
	cout << "nationality :" << employee1.nationality << endl;
	cout << "country :" << employee1.country << endl;
	cout << "city :" << employee1.city << endl;
	switch (employee1.Gender) {
	case 0:cout <<"gender :  Male \n ";break;
	case 1:cout <<"gender : Female \n";break;}
	switch (employee1.status) {	
	case 0:cout <<"status : Single \n ";break;
	case 1:cout <<"gender : Married\n ";break;}
	cout <<"salary : \n" << "MonthlySalary :" << employee1.Salary.MonthlySalary << endl;
	cout << "YearlySalary : " << employee1.Salary.getYearlySalary();








}