// Aidenn Diaz
#include <iostream>
using namespace std;
int main()
{
int numtellers;
int sdays = 0;
float numdays, average;
int teller,year = 0; // these are the counters for the loops
  
cout << "This program will find the amount of sick days a tellar at a bank had for each year out of three years\n\n";
cout << "How many tellars are there ?" << endl << endl;
cin >> numtellers;

for(teller = 1; teller <= numtellers; teller++)
  {
  for(year = 1; year <= 3; year++)
    {
  cout << "Please enter the number of days teller  "
  << teller <<" was sick during year " << year << "." << endl;
  cin >> numdays;
  sdays = sdays + numdays;
    }
  }
cout << endl;
cout << "The " << numtellers << " tellers were out sick for a total of " << sdays << " days suring the last three years";
return 0;
}
