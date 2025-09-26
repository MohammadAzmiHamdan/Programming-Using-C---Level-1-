
#include <iostream>
using namespace std;
void GetCircleDiameter (float& Diameter)
{
    cout << "Please Enter The Diameter, Of The Circle :\n";
    cin >> Diameter;
}
float CalculateCircleArea(float Diameter)
{
    const float pi = 3.14;
    float Area = (pi * pow(Diameter, 2))/4;
    return Area;


}
int main()
{
    float Diameter;GetCircleDiameter(Diameter);
    cout << " The Area : " << CalculateCircleArea(Diameter);
}