

#include <iostream>
using namespace std;

int main()
{
    cout << "please enter the loan Amount : \n";
    float loan_amount, total_months;
    cin >> loan_amount;
    cout << "please enter the Total Months : \n";
    cin >> total_months;
    float monthly_installment_amount = loan_amount / total_months;
    cout << "The Monthly Installment Amount : \n " << monthly_installment_amount;
    return 0;






}

