#include<iostream>

using namespace std;

int forloop()
{
	cout << "For Loop" << endl;
	cout << "--------" << endl;
	for(int n = 1; n <= 10; n++)
	{
		cout << 5 << " X " << n << " = " << 5*n << endl;
	}
	
	cout << endl;
	return 0;
}

int whileloop()
{
	cout << "While Loop" << endl;
	cout << "----------" << endl;
	int n = 1;
	while(n <= 10)
	{
		cout << 5 << " X " << n << " = " << 5*n << endl;
		n++;
	}
	
	cout << endl;
	return 0;
}

int dowhileloop()
{
	cout << "Do-While Loop" << endl;
	cout << "-------------" << endl;
	int n = 1;
	do
	{
		cout << 5 << " X " << n << " = " << 5*n << endl;
		n++;
	}
	while(n <= 10);
	cout << endl;
	return 0;
}

int main()
{
	cout << endl;
	forloop();
	whileloop();
	dowhileloop();
}
