
#include <iostream>
using namespace std;
void  readeGrades( double grades[3]) {
    cout << " please enter grde 1 ? \n ";
    cin >> grades[0];
    cout << " please enter grde 2 ? \n ";
    cin >> grades[1];
    cout << " please enter grde 3 ? \n ";
    cin >> grades[2];


}
double calculeatGradesAverage(double grades[3]) {
    double sum = 0;
    sum = grades[0] + grades[1] + grades[2];
    double avg = sum / 3;
    return avg;

}
void printGradesAverage(double avg) {

    cout << " The Average Of Grades IS " << avg << endl;

}
int main()
{
    double grades[3];
    readeGrades(grades);
    printGradesAverage(calculeatGradesAverage(grades));


}