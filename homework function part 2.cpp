
#include <iostream>
using namespace std;
void MySumProcedure() {
	cout << "Please Enter Number 1 :\n";
	float number1;
	cin >> number1;
	cout << "Please Enter Number 2 :\n";
	float number2;
	cin >> number2; cout << "\n******************************\n " <<"\n"<<number1 + number2<<"\n";
}
float MySumFunction (){
	cout << "Please Enter Number 1 :\n";
	float number1;
	cin >> number1;
	cout << "Please Enter Number 2 :\n";
	float number2;
	cin >> number2; cout << "\n******************************\n ";return number1 + number2;
}
int main()
{
	MySumProcedure();
	
	cout << MySumFunction();
	//cout << MySumFunction()+10;   ------>>>>         = return +10


}