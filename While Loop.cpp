
#include <iostream>
using namespace std;
int ReadIntNumberFromRange(int From, int To) {

	int number;
	cout << " pleaese enter a number between " << From << " and " << To << endl;
	cin >> number;
	while (number<From || number>To) {
		cout << " Wrong number ! \n";
		cout << " pleaese enter a number between " << From << " and " << To << endl;
		cin >> number;






	}
	return number;



}
int problem37() {
	cout << " please enter number \n ";
	int num,sum=0;cin >> num;
	while (num != -99) {
		
		sum += num;
		cout << " please enter number \n ";
		cin >> num;


	}
	return sum;

}
int main()
{
	//cout << " The number is " << ReadIntNumberFromRange(1, 10) << endl;
	cout << " The sum of numbers  is " << problem37() << endl;


}