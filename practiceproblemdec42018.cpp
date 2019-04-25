/* Tavish Misra
 * Practice Problem - Arrays
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int arraysize = 50;
    int intarray[arraysize];
    srand(time(0));
    for(int i = 0; i < arraysize; i++)
    {
        intarray[i] = rand();
    }
    cout << endl;
    for(int j = 0; j < arraysize; j++)
    {
        if (intarray[j] % 2 == 0)
        {
            if (intarray[j] % 3 == 0)
            {
                cout << intarray[j] << endl;
            }
        }

        
    }

    return 0;

}