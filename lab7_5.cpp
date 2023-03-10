// This program will calculate the average of three test scores
// before printing the values. The user will be prompted to enter
// the test scores.
// Aidenn Diaz
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
// declare variables as doubles to keep precision
double score1;
double score2;
double score3;
double score4;
string name;
double average;

//prompt user to enter student name
cout << " enter the name of the student\n";
getline(cin,name);

// Prompt user to enter score1.
cout << "\nEnter test score1";
cout << "\nThen hit enter\n";
cin >> score1;
// Prompt user to enter score2.
cout << "\nEnter test score2";
cout << "\nThen hit enter\n";
cin >> score2;
// Prompt user to enter score3.
cout << "\nEnter test score 3";
cout << "\nThen hit enter\n";
cin >> score3;
//prompt user to enter score 4
cout << "\nEnter test score 4";
cout << "\nThen hit enter\n";
cin >> score4;
// calc
average = (score1 + score2 + score3 + score4)/4;
// Output the values.
cout << "\nAfter calculating the average is "<< average;

return 0;
}
