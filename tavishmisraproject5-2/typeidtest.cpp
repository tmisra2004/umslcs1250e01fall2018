#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	int i = 245;
	cout << typeid(i).name() << endl;

	return 0;
}