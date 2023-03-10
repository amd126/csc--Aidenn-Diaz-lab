#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
int x;
int y;
int j;
int n;
n = 2;
for(x = 0; x <5; x++)
  {
  int y = 6 - x;
  cout << setw(y) << "*";
  if(x>0)
    {
    cout << setw(n) <<"*";
    n = n + 2;
    cout << endl;
    }
  else
    cout << endl;
  }
return 0;
}
