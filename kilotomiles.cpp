// This program takes the amount of kilometer from the user and then converts them into miles
// before printing the values. The user will be prompted to enter
// the amount of kilometers.
// Aidenn Diaz
#include <iostream>
using namespace std;
int main()
{
float distance_travaled_in_kilometers;
float miles;
// Prompt user to enter kilometers.
cout << "Enter the distance travaled in kilometers" << endl;
cout << "Then hit enter" << endl;
cin >> distance_travaled_in_kilometers;
// calc
miles = distance_travaled_in_kilometers * 0.621;
// Output the values.
cout << "After converting, the amount of miles is "
<< miles << " miles";
return 0;
}
