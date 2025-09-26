
#include <iostream>
using namespace std;
void get2number(float &num1, float &num2) {
	cout << "please enter first number : \n";
	cin >> num1;
	cout << "please enter second number : \n";
	cin >> num2;
}
void swap2number(float &num1, float &num2) {
	float temp = num1;
	num1 = num2;
	num2 = temp;
	
}
int main()
{
	float num1, num2;
	get2number(num1, num2);
	swap2number(num1, num2);
	cout << num1 << num2;



}
