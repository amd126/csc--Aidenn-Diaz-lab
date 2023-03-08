// This program has the user input a number n and then finds the
// mean of the first n positive integers
// PLACE YOUR NAME HERE
#include <iostream>
using namespace std;
int main()
{
int value1; // value is some positive number n
int value2; // value is positive number m
float total = 0; // total holds the sum of the first n positive numbers;
int number; // the amount of numbers
float mean; // the average of the first n positive numbers
cout << "Please enter a positive integer where the range starts" << endl;
cin >> value1;
cout << "Please enter a positive integer where the range ends" << endl;
cin >> value2;
int c = 0;//counter
if (value1 > 0 && value2 > 0) // input validation
{
    for(number = 1; number <= value2 && c <= (value2 -value1); number++)
     { 
      if(number >= value1)
      {
        c = c + 1;
        total = total + number;
      }
     }
 } 
cout << "the mean of the range is " << static_cast<float>(total/c);
return 0;
}
