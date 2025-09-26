

#include <iostream>
using namespace std;
int main()
{
    

    //  ||=or   &&=and  !=not  () is importent in cout.
    bool a = 0, b = 1;
    cout << (a || b) << endl;
    cout << (a && b) << endl;
    cout << !a << endl; 
    cout << !b << endl;
    cout << !(a && b) << endl;
    cout << !(a || b) << endl;

    bool result;
    //NOT(5>6 or 7=7) AND NOT (1 Or false)
    result = !(5 > 6 || 7 == 7) && !(1 || 0);
    cout << result<<endl;

    cout << (12 >= 12) <<endl;
    cout << (12 > 7) << endl;
    cout << (8 < 6) << endl;
    cout << (8 == 8) << endl;
    cout << (12 <= 12) << endl;
    cout << (7 == 5) << endl; 
    cout << !(12 >= 12) << endl;
    cout << !(12 < 7) << endl;
    cout << !(8 < 6) << endl;
    cout << !(8 == 8) << endl;
    cout << !(12 <= 12) << endl;
    cout << !(7 == 5) << endl;
    cout << (1 && 1) << endl;
    cout << (true && 0) << endl;
    cout << (0 || 1) << endl;
    cout << (0 || 0) << endl;
    cout << !0<< endl;
    cout << !(1 == 0) << endl;
    cout << ((7 == 7) && (7 > 5)) << endl;
    cout << ((7 == 7) && (7 < 5)) << endl;
    cout << ((7 == 7) || (7 < 5)) << endl;
    cout << ((7 < 7) || (7 > 5)) << endl;
    bool x = !(7 == 7) && (7 > 5);
    cout <<x<< endl;
    cout << ((7 == 7) && !(7 < 5)) << endl;

    cout << ((5 > 6 && 7 == 7) || (1 || 0)) << endl;
    cout << (!(5 > 7 && 7 == 7) || (1 || 0)) << endl;
    cout << (!(5 > 6 && 7 == 7) && !(1 || 0)) << endl;
    cout << (!(5 > 6 || 7 == 7) && !(1 || 0)) << endl;
    cout << (((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && true) << endl;
    cout << (((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3))|| true) << endl;


    return 0;









}

