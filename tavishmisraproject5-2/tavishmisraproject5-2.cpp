#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
  string line;
  int count = 0;
  int evencount = 0;
  int oddcount = 0;
  double sum = 0;
  string filename;
  cout << endl;
  cout << "What is the name of the file you wish to open? ";
  getline(cin,filename);
  cout << endl;
  ifstream myfile(filename);
  if (myfile.is_open())
  {
    cout << endl;
    cout << "The file is successfully opened!" << endl;
    cout << endl;
    while (myfile >> line)
    { 
		++count;

      if (stoi(line) % 2 == 0)
      {
        ++evencount;
      }

     else
     {
        ++oddcount;
     }

      sum+=stoi(line);
    }
    
    myfile.close();
  }

      else {
	          cout << "File not found." << endl;
            cout << endl;
 	      	  return 0;
           }
   
  cout << endl;
  cout << "Number Count: " << count << endl;
  cout << "Even Count: " << evencount << endl;
  cout << "Odd Count: " << oddcount << endl;
  cout << "Sum: " << sum << endl;
  cout << "Average: " << fixed << setprecision(3) << sum/count << endl;
  cout << endl;
  return 0;
}
