#include <iostream>
#include <iomanip>
using namespace std;

char package;
int gigabytes;

int menu()
{
	
	cout << endl;
	cout << "MOBILE SERVICE PROVIDER" << endl;
	cout << "-----------------------" << endl;
	cout << endl;
	cout << "Please choose a package:" << endl;
	cout << endl;
	cout << "Package A: For $39.99 per month, 4 gigabytes are provided. Additional data costs $10 per gigabyte." << endl;
	cout << "Package B: For $59.99 per month, 8 gigabytes are provided. Additional data costs $5 per gigabyte." << endl;
	cout << "Package C: For $69.99 per month, unlimited data is provided." << endl;
	cout << endl;
	cout << "Which package was purchased? (enter A, B, or C as a capital letter) ";
	cin >> package;
	switch (package) {
		case 'A':
			cout << "How many gigabytes were used? ";
			cin >> gigabytes;
			if (gigabytes <= 4) {
			cout << "Your total monthly bill is $39.99" << endl;
			}
			else {
			cout << "Your total monthly bill is $" << setprecision(4) << 39.99+((gigabytes-4)*10) << endl;
			}
			break;
		case 'B':
			cout << "How many gigabytes were used? ";
			cin >> gigabytes;
			if (gigabytes <= 8) {
				cout << "Your total monthly bill is $59.99" << endl;
			}
			else {
			cout << "Your total monthly bill is $" << setprecision(4) << 59.99+((gigabytes-8)*5) << endl;
			}
			break;
		case 'C':
			cout << "How many gigabytes were used? ";
			cin >> gigabytes;
			cout << "Your total monthly bill is $69.99" << endl;
			break;
		default: 
			cout << "\033[2J\033[1;1H";
			cout << "Sorry, only choices A, B, or C (capital letter) are allowed." << endl;
			menu();
	}
	return 0;
}


int main()
{
	menu();
	return 0;
}
			
			
	