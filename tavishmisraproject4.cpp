/*
Tavish Misra
CMPSCI1250-E01
Project 4
*/

#include <iostream>

using namespace std;

int main()
{
    double length1;
    double length2;
    double width1;
    double width2;
    double area1;
    double area2;
    
    cout << "COMPARING THE AREAS OF TWO RECTANGLES" << endl;
    cout << "-------------------------------------" << endl;
    cout << endl;
    cout << "What is the length of the first rectangle? ";
    cin >> length1;
    cout << "What is the width of the first rectangle? ";
    cin >> width1;
    cout << "What is the length of the second rectangle? ";
    cin >> length2;
    cout << "What is the width of the second rectangle? ";
    cin >> width2;
    cout << endl;
    area1 = length1 * width1;
    area2 = length2 * width2;
    
    if (area1 > area2)
    {
        cout << "The first rectangle has the greater area." << endl;
    }
    
    else if (area2 > area1)
    {
        cout << "The second rectangle has the greater area." << endl;
    }
    
    else if (area1 == area2)
    {
        cout << "Both rectangles have the same area.";
    }
    
    else
    {
        cout << "Try again." << endl;
    }

    return 0;
}