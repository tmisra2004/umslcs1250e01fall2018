/*
Tavish Misra
CPST 1250-E01
Project 2
Chapter 2 - Programming Challenge #17*/

#include <iostream>

using namespace std;

int main()
{
    cout << endl;
	int shares = 750;
	int shareprice = 35;
	double commission = 0.02;
    cout << "The total amount paid for the stock alone is " << shares * shareprice << " dollars." << endl;
    cout << "The amount of commission is " << (shares * shareprice)*commission << " dollars." << endl;
    cout << "The total amount paid is " << (shares * shareprice)*(1+commission) << " dollars." << endl;
    return 0;
}
