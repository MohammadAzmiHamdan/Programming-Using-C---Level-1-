
#include <iostream>
using namespace std;

int main()
{
    cout << "please enter the total seconds :\n";
    int total_seconds, days, hours, minutes, seconds;
    cin >> total_seconds;
    days = total_seconds / (24 * 60 * 60);
    total_seconds %= (24 * 60 * 60);//تعني ان القيمة الجديدة هي باقي القسمه 
    
    hours = total_seconds / (60 * 60);
    total_seconds %= (60 * 60);//تعديل لقيمة التغير ليصبح باقي القسمة 
    minutes = total_seconds / 60;
    total_seconds %= 60;
    seconds = total_seconds;
    cout << round(days) << ":" << round(hours) << ":" << round(minutes) << ":" << round(seconds);
    return 0;






}