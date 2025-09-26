
#include <iostream>
#include<cmath>
using namespace std;
void GetCircleRadius(float &Radius)
{
    cout << "Please Enter The Radius Of The Circle :\n";
    cin>>Radius;
}
float CalculateCircleArea(float Radius)
{
    const float pi = 3.14159;
    float Area = pi * pow(Radius, 2);
    return Area;


}
int main()
{
    float Radius;GetCircleRadius(Radius);
    cout << " The Area : " << CalculateCircleArea(Radius);
}