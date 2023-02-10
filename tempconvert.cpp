// This program converts Fahrenheit to Celsius
// before printing the values. The user will be prompted to enter
// the temparture in Fahrenheit.
// Aidenn Diaz
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  // This is a banner displying my name the date the class the assignment and its purpose
  cout << " *********************************************************\n"<<"* Aidenn Diaz"<<setw(30)<<"February 10, 2023"<<setw(26)<<"*\n* CSC 101"<<setw(52)<<"*\n""*"<<setw(60)<<"*\n*"<<setw(20)<<"Laboratory Assignment # 4"<<setw(35)<<"*\n*"<<setw(58)<<"*"<<"\n* The assignment is to create a program that has a banner,*\n* and convert fahrenheit to celsius."<<setw(25)<<"*\n*"<<setw(58)<<"*"<<"\n *********************************************************";
  // here i declare variables as doubles to keep precision
double fahrenheit;
double celsius;
// Prompt user to enter fahrenheit.
cout << "\nEnter the temparture in fahrenheit";
cout << "\nThen hit enter\n";
cin >> fahrenheit;
// calc
celsius = (fahrenheit - 32) * (5.0 / 9.0);
// Output the values.
cout << "\nAfter converting, the temparture in celsius is "
<< celsius;

return 0;
}
