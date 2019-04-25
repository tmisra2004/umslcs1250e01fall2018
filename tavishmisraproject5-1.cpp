#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double membershipfee;
    cout << endl;
    cout << "What is the current membership fee? $";
    cin >> membershipfee;
    cout << endl;
    cout << "PROGRESSION OF MEMBERSHIP FEE FOR NEXT 6 YEARS AT INCREASE OF 4% PER YEAR" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    cout <<  endl;
    cout << "Current Year: $" << fixed << setprecision(2) << membershipfee << endl;
    cout << endl;
    cout << "For next 6 years: " << endl;
    cout << endl;

    for(int year = 2; year <= 7; year++)
    {
		membershipfee*=1.04;
		cout << "Year " << year << ": $" << fixed << setprecision(2) << membershipfee << endl;
    }

    cout << endl;
    return 0;

}
