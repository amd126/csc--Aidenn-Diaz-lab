#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream fin;
double score;
string name;
double avg;
fin.open("grades.out");
  for(int x =1; x<=10;x++)
  {  
  fin>>name;
  cout << name<<endl;
  
    for(int y =1;y<=4;y++)
    {      
      fin>>score;
      cout << score << endl;
    }
  fin>>avg;
  cout << avg << endl;
  }
fin.close();
return 0;
}
