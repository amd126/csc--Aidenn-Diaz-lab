// This program will calculate the area of a rectangle with the user given measurements
// before printing the values. The user will be prompted to enter
// the length and width of the rectangle.
// Aidenn Diaz
#include <iostream>
using namespace std;
int main()
{
float length;
float width;
float area;
// Prompt user to enter length.
cout << "Enter the length of the rectangle" << endl;
cout << "Then hit enter" << endl;
cin >> length;
// Prompt user to enter width.
cout << "Enter the width of the rectangle" << endl;
cout << "Then hit enter" << endl;
cin >> width;
// calc
area = length * width;
// Output the values.
cout << "After calculating, the area of the rectangle is "
<< area;
return 0;
}
