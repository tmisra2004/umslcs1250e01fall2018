#include <iostream>
#include <iterator>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    const int arraysize = 15;
    int grades[arraysize];
    int grade;
    cout << endl;
    cout << "Generating p6.dat file...";
    ofstream p6out;
    p6out.open("p6.dat");
    srand(time(0));
    for(int i = 0; i < arraysize; i++)
    {
        grade = (rand() % (100 - 0 + 1)) + 0;
        p6out << grade << "\n";
    }
    p6out.close();
    cout << "done!" << endl;
    cout << endl;
    cout << "Opening p6.dat file...";
    ifstream p6in;
    p6in.open("p6.dat");
    cout << "done!" << endl;
    cout << endl;
    cout << "Reading in data from p6.dat...";
    for(int j = 0; j < arraysize; j++)
    {
        p6in >> grades[j];
    }
    p6in.close();
    cout << "done!" << endl;
    cout << endl;
    int total, hiscore, numAs;
    double savg1, savg2, savg3, savg4, savg5, tavg1, tavg2, tavg3;
    total = 0;
    for(int k = 0; k < 3; k++)
    {
        total += grades[k];
    }
    savg1 = total / 3;
    total = 0;
    for(int m = 3; m < 6; m++)
    {
        total += grades[m];
    }
    savg2 = total /3;
    total = 0;
    for(int n = 6; n < 9; n++)
    {
        total += grades[n];
    }
    savg3 = total / 3;
    total = 0;
    for(int p = 9; p < 12; p++)
    {
        total += grades[p];
    }
    savg4 = total / 3;
    total = 0;
    for(int q = 12; q < 15; q++ )
    {
        total += grades[q];
    }
    savg5 = total / 3;
    total = 0;
    cout << endl;
    cout << "Averages per student: " << fixed << setprecision(2) << savg1 << " " << savg2 << " " << savg3 << " " << savg4 << " " << savg5 << endl;
    cout << endl;
    for(int r = 0; r < 15; r+=3)
    {
        total+=grades[r];
    }
    tavg1 = total / 5;
    total = 0;
    for(int s = 1; s < 15; s+=3)
    {
        total+=grades[s];
    }
    tavg2 = total / 5;
    total = 0;
    for(int t = 2; t < 15; t+=3)
    {
        total+=grades[t];
    }
    tavg3 = total / 5;
    total = 0;
    cout << endl;
    cout << "Averages per test: " << fixed << setprecision(2) << tavg1 << " " << tavg2 << " " << tavg3 << endl;
    cout << endl;
    hiscore = grades[0];
    for(int u = 1; u < 15; u++)
    {
        if (grades[u] > hiscore)
        {
            hiscore = grades[u];
        }
    }
    cout << "Overall Best Score: " << hiscore << endl;
    cout << endl;
    numAs = 0;
    for(int score : grades)
    {
        if (score >= 90)
        {
            numAs++;
        }
    }
    cout << "Number of grade As: " << numAs << endl;
    cout << endl;

    return 0;
}