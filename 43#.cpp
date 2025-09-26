/*Write a program that inputs the number of seconds and changes it to days, hours, minutes, and seconds
Input
193,535
Output 
2:5:45:35*/

#include <iostream>
using namespace std;
void GetTotalSeconds(int &TotalSeconds) {
	cout << "please enter the total duration by seconds : \n ";
	cin >> TotalSeconds;

}
void Print_DurationBY_days_hours_minutes_seconds(int TotalSeconds)
{
	int days = (TotalSeconds / (24 * 60 * 60));
	int leftseconds = (TotalSeconds % (24 * 60 * 60));
	int hours = (leftseconds / (60 * 60));
	leftseconds = (leftseconds % ( 60 * 60));
	int minutes = (leftseconds / (60 ));
	leftseconds = (leftseconds % ( 60));
	int seconds = leftseconds;
	cout << days << " : " << hours << " : " << minutes << " : " << seconds;
}
int main()
{
	int seconds;GetTotalSeconds(seconds);
	Print_DurationBY_days_hours_minutes_seconds(seconds);

}