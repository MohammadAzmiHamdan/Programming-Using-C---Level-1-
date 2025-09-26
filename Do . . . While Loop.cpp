 #include <iostream>  
#include <string>    
using namespace std;
int ReadNumberInRangeUsingWhileLoop(int From ,int To) {
	int number;
	cout << " please enter number between " << From << " and " << To << endl;
	cin >> number;
	while (number<From || number>To) {
		cout << "Wrong number ! \n";
		cout << " please enter number : \n ";
		cin >> number;
	}
	return number;
}
int ReadNumberINRangeUsingDo_WhileLoop(int From, int To) {
	int number;
	do {
		cout << " please enter number between " << From << " and " << To << endl;
		cin >> number;

	} while (number<From || number>To);
		return number;


}
int main()
{
	
	//cout<<" the number you enterd  "<<ReadNumberInRangeUsingWhileLoop(10, 20)<<endl;
	//cout << " the number you enterd  " << ReadNumberINRangeUsingDo_WhileLoop(10, 20) << endl;




}