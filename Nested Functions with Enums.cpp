
#include <iostream>
using namespace std;
enum enWeekDays{ Sun =1, Mon =2, Tue =3, Wed =4, Thu =5, Fri =6, Sat =8};
void ShowWeekDaysMenue(){
    
	cout << "*****************************" << endl;
	cout << "          Week Days          " << endl;
    cout << "*****************************" << endl;
    cout << "1: Sunday" << endl;
    cout << "2: Monday" << endl;
    cout << "3: Tuesday" << endl;
    cout << "4: Wednesday" << endl;
    cout << "5: Thursday" << endl;
    cout << "6: Friday" << endl;
    cout << "7: Saturday" << endl;
    cout << "*****************************" << endl;
    cout << "Please enter the number of day?" << endl;


}
enWeekDays ReadWeekDay() {

    int daynum;
    cin >> daynum;
    return (enWeekDays)daynum;
}
string GetWeekDayName(enWeekDays day) {
    switch (day) {

    case enWeekDays::Sun:
        return "Sunday";
        break;
    case enWeekDays::Mon:
        return "Monday";
        break;
    case enWeekDays::Tue:
        return "Tuesday";
        break;
    case enWeekDays::Wed:
        return "Wednesday";
        break;
    case enWeekDays::Thu:
        return "Thursday";
        break;
    case enWeekDays::Fri:
        return "Friday";
        break;
    case enWeekDays::Sat:
        return "Saturday";
        break;
    default:
        return "Not a week day!\n";











    }







}
int main()
{
    system("color F1");
    ShowWeekDaysMenue();
    cout << " today is " << GetWeekDayName(ReadWeekDay());
        

}