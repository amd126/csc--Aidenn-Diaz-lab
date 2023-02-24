// This program create a number guessing game

#include <iostream>
using namespace std;
int main()
{
  
// banner
  
cout<<"--------------------------------"<<endl;
cout<< "Aidenn Diaz" << endl;
cout<< "Computer Science 1"<<endl;
cout<< "CRN, 26249"<<endl;
cout<< "Lab 6"<< endl;
cout<< "February 24, 2023" << endl;
cout<<"--------------------------------\n"<<endl;

// declaring variables
  
int choice;
int com_choice;
int a = 0;
int t = 1;
int c;


cout << "This program will generate a random number in the range 1 to 100. You will be given as many chances as you need to guess the number correctly.\n";

// this loop allows the user to make multiple guesses until correct
  
while (t == 1){
  
// producing rand number 1-100
  
srand(time(NULL));
com_choice = rand()%100+1;


  while (choice != com_choice){
    cout << "enter your guess\n";
    cin >> choice;
    a = a + 1;
    if (choice == com_choice)
      cout << "congratulations you guessed correctly. \nIt took you " << a << " guesses.\n";  
  else
    if ((com_choice -10 < choice) && (com_choice + 10 > choice))
      cout << "you were close\n";
    if (choice > com_choice)
        cout << " try lower\n";
    if (choice < com_choice)
        cout << " try higher\n";}
  if (choice == com_choice)
   cout << "if you would like to play again type 1. if not type 0\n";
    choice = 0;
    a = 0;
    cin >> c;
    if (c != 1)
    t = 0;
    }
return 0;
}
