/* Tavish Misra
 * Classroom Practice Problem, 12/4/2018
 * CPST 1250-E01
 * Fall 2018 
 * This program randomly generates a square array of nxn elements (up to 10x10), n being a random number.
 * The elements are random integers between 1 and 9.
 * The arrays are printed. Each row is summed with its sum printed below each row.
 * The column sums are printed below the array itself.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); //Seed the random number generator
    const int rows = (rand() % (10 - 1 + 1)) + 1; //set rows equal to a random value between 1 and 10.
    const int cols = rows; //set columns equal to to rows
    int valuearray[rows][cols]; //initialize nxn array
    
    for (int a = 0; a < rows; a++)
    {
        for (int b = 0; b < cols; b++)
        {
            valuearray[a][b] = (rand() % (9 - 1 + 1)) + 1;
        }
    }

    //These nested for loops populate the array with random integers between 1 and 9

    cout << endl;
    int sum = 0; //initialize the sum accumulator
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << valuearray[i][j] << "\t";
            sum += valuearray[i][j];
        }
        //This prints out the array rows and accumulates the sum for each row
        
        cout << endl;
        cout << "Row Sum: " << sum << endl;
        cout << endl;
        sum = 0;
    }
    // prints out the row sum of each row and resets the sum accumulator to 0 prior to summing the next row.
    
    sum = 0; // reset the sum accumulator to 0 for summing the columns
    
    for (int m = 0; m < cols; m++)
    {
        for (int n = 0; n < rows; n++)
        {
            sum += valuearray[n][m];
        }

        // accumulate the sum of the columns
        
        cout << "Column " << m << " Sum: " << sum << "  ";
        sum = 0;

        // Prints the column sum and resets the sum accumulator to 0 prior to accumulating the sum of the next column
    }
    
    cout << endl;
    

    return 0;
}


