
#include <iostream>
using namespace std;
void get2dimensions_of_the_rectangle(float &num1, float &num2)
{
	cout << " Please Enter The Length Of The Rectangle : \n";
	cin >> num1;
	cout << " Please Enter The Width Of The Rectangle : \n";
	cin >> num2;
}
float calculate_rectangle_area(float num1, float num2) {
	float Area = num1 * num2;
	return Area;
}

	int main()
{
		float num1, num2;
		get2dimensions_of_the_rectangle(num1, num2);
		cout<<"The Area Of The Rectangle : "<< calculate_rectangle_area(num1, num2);






}