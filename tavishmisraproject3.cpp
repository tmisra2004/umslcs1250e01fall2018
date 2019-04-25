#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double amount;
    double principal;
    double rate;
    int t;
    double interest;
    
    amount = principal * pow(((1+((rate/100))/t)),t);
    cout << "What is the principal? $";
    cin >> principal;
    cout << endl <<"What is the interest rate (enter percentage)? ";
    cin >> rate;
    cout << endl << "How many times is the interest compounded? ";
    cin >> t;
    interest = amount - principal;
    cout << endl << "Interest Rate: " << rate << endl;
    cout << "Times Compounded: " << t << endl;
    cout << "Principal: " << principal << endl;
    cout << "Interest " << interest << endl;
    cout << "Amount in Savings: " << amount << endl;
    return 0;
}
