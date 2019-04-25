#include <iostream>
#include <iterator>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    const int rows = 5;
    const int cols = 3;
    int gradearray[rows][cols];
    cout << endl;
    cout << "Generating p6.dat file...";
    ofstream p6out;
    p6out.open("p6.dat");
    srand(time(0));
    

}