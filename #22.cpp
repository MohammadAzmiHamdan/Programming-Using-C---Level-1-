#include <iostream>
using namespace std;

int main()
{
   cout << "please enter A:\n";
    float A, B;
   cin >> A;
   cout << "please enter B: \n";
   cin >> B;
   const float pi = 3.14 ;
   float Area = pi * B * B / 4 * ((2 * A - B) / (2 * A + B));
   cout << "The Area = " <<floor( Area);




}

