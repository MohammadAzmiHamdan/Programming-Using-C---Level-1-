
#include <iostream>
#include <cmath>
using namespace std;
void GetRectangleDimensions(float& diagonal, float& SideLength)
{
	cout << " Please Enter The diagonal Of The Rectangle : \n";
	cin >> diagonal;
	cout << " Please Enter The Side Length Of The Rectangle : \n";
	cin >> SideLength;
}
float CalculateRectangleArea(float diagonal, float SideLength) {
	float Area = (SideLength * sqrt(pow(diagonal ,2) -pow(SideLength,2)));
	return Area;
}

int main()
{
	float num1, num2;
	GetRectangleDimensions(num1, num2);
	cout << "The Area Of The Rectangle : " << CalculateRectangleArea(num1, num2);






}