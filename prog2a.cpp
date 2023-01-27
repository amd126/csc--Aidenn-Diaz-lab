#include<iostream>
#include<math.h>
using namespace std;

int main()
{
 float x = 1.0;
 float y = 0.0;
 float z = 0.0;
 y = x + 0.000001;
 z = x + 0.0000000000000001;
 cout << "X > X   -> " << (x>x) << endl;
 cout << "Y > X   -> " << (y>x) << endl;
 cout << "Z > X   -> " << (z>x) << endl;

 cout << "11.1/0.0 -> " << 11.1/0.0 << endl;
 cout << "0.0/0.0  -> " << 0.0/0.0 <<endl;
 cout << "log(0)   -> " << log(0)  << endl;
 cout << "sqrt(-1) -> " << sqrt(-1) << endl;

 float a = 2.0/10.0;
 cout << "a == a   -> " << (a==a) << endl;
 cout << "a -> " << a << "     2.0/10.0 -> " << 2.0/10.0 << endl;
 cout << "a == 2.0/10.0 -> " << (a == 2.0/10.0) << endl;
  
 cout << "ISNAN(sqrt(-1)) -> " <<  isnan(sqrt(-1))  << endl;
 cout << "ISNAN(5) -> " <<  isnan(5)  << endl;

 return 0;
}
