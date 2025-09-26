

#include <iostream>
using namespace std;

int main()
{
    cout << "please enter the loan amount : \n";
    float loan_amount, monthly_payment , total_months;
    cin >> loan_amount;
    cout << "please enter the monthlypayment :\n ";
    cin >> monthly_payment;
    total_months = loan_amount / monthly_payment;
    cout << "Total Months = " << total_months;

}

