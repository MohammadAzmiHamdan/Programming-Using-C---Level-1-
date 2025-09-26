
#include <iostream>
using namespace std;
int main()
{
	float grades[3];
	cout << "please enter grade 1 : \n ";
	cin >> grades[0];

	cout << "please enter grade 2 : \n ";
	cin >> grades[1];

	cout << "please enter grade 3 : \n ";
	cin >> grades[2];

	float Avg = (grades[0] + grades[1] + grades[2]) / 3;

	cout << " the average of three grades is : " << Avg;


 return 0;
}