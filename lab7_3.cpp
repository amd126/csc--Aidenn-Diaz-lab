#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
int x;
int y;
int j;
for(x = 0; x <5; x++)
  {
  int y = 6 - x;
  cout << setw(y) << "*";
  for(j = 1;j <= x;j++)
    cout << "**";
  cout << endl;
  }
return 0;
}
