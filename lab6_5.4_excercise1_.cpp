// This program finds the average time spent programming by a student
// each day over a period of days.
// Aidenn Diaz
#include <iostream>
using namespace std;
int main()
{
int numStudents;
int wdays;
float numHours, total, average;
int student,day = 0; // these are the counters for the loops
cout << "This program will find the average number of hours a day"
<< " that a student spent programming over a period of days\n\n";
cout << "How many students are there ?" << endl << endl;
cin >> numStudents;
cout << "enter how many days the students programmed \n";
cin >> wdays;
for(student = 1; student <= numStudents; student++)
{
total = 0;
for(day = 1; day <= wdays; day++)
{
cout << "Please enter the number of hours worked by student "
<< student <<" on day " << day << "." << endl;
cin >> numHours;
total = total + numHours;
}
average = total / wdays;
cout << endl;
cout << "The average number of hours per day spent programming by "
<< "student " << student << " is " << average
<< endl << endl << endl;
}
return 0;
}
