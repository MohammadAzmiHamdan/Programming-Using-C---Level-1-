/*Write a program to calculate the task duration in seconds and print it on screen
 Given the time duration of a task in the number of days, hours, minutes, and seconds,.*/
#include <iostream>
using namespace std;
struct duration {
	float days;
	float hours;
	float minutes;
	float seconds;

};
void GetDuration(duration &time) {
	cout << "please enter the days : \n";
	cin >> time.days;
	cout << "please enter the hours : \n";
	cin >> time.hours;
	cout << "please enter the minutes : \n";
	cin >> time.minutes;
	cout << "please enter the seconds : \n";
	cin >> time.seconds;
}
float  CalculateDurationinSeconds(duration time)
{
	float Seconds_inDays = (time.days * 24 * 60 * 60);
	float Seconds_inhours = (time.hours * 60 * 60);
	float Seconds_inMinutes = (time.minutes * 60);
	float TolalSeconds = (time.seconds + Seconds_inhours + Seconds_inDays + Seconds_inMinutes);

	return TolalSeconds;
}
int main()
{
	duration durationOFstudy;
	GetDuration(durationOFstudy);
	cout << CalculateDurationinSeconds(durationOFstudy) << " Seconds \n";

	duration DeadlineRemaining;
	GetDuration(DeadlineRemaining);
	cout << CalculateDurationinSeconds(DeadlineRemaining) << " Seconds \n";


}