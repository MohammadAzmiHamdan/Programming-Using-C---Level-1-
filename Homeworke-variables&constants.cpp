
#include <iostream>
using namespace std; 

int main()
{

	string name;
		short age;
		string city;
	string country;
		float Monthlysalary;
	char Gendar;
	bool Married;





	cout << "enter your name :\n";
	cin >> name ;
	cout << "enter your age :\n";

	cin >> age ;

	cout << "enter the name of your city :\n";
	cin >> city ;

	cout << "enter the name of your country :\n";
	cin >> country ;

	cout << "enter your monthly salary:\n";
	cin >> Monthlysalary ;
	float Yearlysalary = Monthlysalary * 12;


	cout << "enter your gender M/F :\n";
	cin >> Gendar;

	cout << "Are you married? if yes enter 1 ... if no enter 0. :\n";
	cin >> Married ;





	cout << "*******************************\n";
	cout << "Name :"<<name<<endl;
	cout << "Age :"<<age<<" Years old"<<endl;
	cout << "City :"<<city<<endl;
	cout << "Country :"<<country<<endl;
	cout << "Monthly Salry :"<<Monthlysalary<<endl;
	cout << "Yearly Salary :"<<Yearlysalary<<endl;
	cout << "Gendar :"<<Gendar<<endl;
	cout << "Married :"<< Married<< endl;
	cout << "*********************************\n";

	short number1, number2, number3;
	cout << " enter number1"<<endl;
	cin >> number1 ;

	cout << " enter number2"<<endl;
	cin >> number2 ;

	cout << " enter number3"<<endl;
	cin >> number3 ;


	cout << number1 << "+"<<endl;
	cout << number2 << "+"<<endl;
	cout << number3 << endl<<endl<<endl ;
	
	cout << "__________________________________________________"<<endl<<endl;
	cout << "Total = " << number1+number2+number3 << endl<<endl;

	cout << "How old are you ?\n";
	 short Age;
	cin >> Age ;

	cout << "After 5 Years You will be " << Age + 5 << " Years old."<<endl;


	return 0;












}

