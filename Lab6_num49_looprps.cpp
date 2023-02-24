// this program will play rock paper scissors with user

#include <iostream>
#include <cstdlib>
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

  
//declaring variables
  
int rock = 1;
int paper = 2;
int scissor = 3;
int choice;
int com_choice;
int end = 0;
int t = 1;
int c;

//this while loop allows players to play again
  
while (t == 1)
{
  
// displaying game rules and prompting user
  
cout << "lets play rock paper scissors\nrock beats scissors\npaper beats rock\nscissors beats paper\nif the players tie play again until someone wins.\n";
cout << "1. rock\n2. paper\n3. scissors\n";
cout << "Type the corrospnding number to play that move.\n";
  
while (end == 0)
  {
  cin >> choice;

  //generating a random move to play against player

  srand(time(NULL));

  com_choice = rand()%3+1;

  cout << com_choice << endl;
  // determining outcome

  if (choice == 1 && com_choice == 2)
    {
    cout << "computer wins\n";
    end = 1;
    }
  else if (choice == 1 && com_choice == 1)
    {
    cout << "tie, play again\n";
    end = 0;
    }
  else if (choice == 1 && com_choice ==3)
    {
    cout << "player wins\n";
    end = 1;
    }
  else if (choice == 2 && com_choice == 1)
    {
    cout << "player wins\n";
    end = 1;  
    }
  else if (choice == 2 && com_choice == 2)
    {
    cout << "tie, play again\n";
    end = 0;
    }
  else if (choice == 2 && com_choice == 3)
    {
    cout << "computer wins\n";
    end = 1;
    }
  else if (choice == 3 && com_choice == 1)
    {
    cout << "computer wins\n";
    end = 1;
    }
  else if (choice == 3 && com_choice == 2)
    {
    cout << "player wins\n";
    end = 1;
    }
  else if (choice == 3 && com_choice == 3)
    {
    cout << "tie, play again\n";
    end = 0;
    }
    }
cout << "end\n";

// here we prompt user to decide to play again or not
  
cout << "if you would like to play again type 1, if not then type 0\n";
cin >> c;
if (c == 1)
  {
  t = 1;
  end = 0;
  } 
else 
  {
  t = 0;
  }
}
return 0;
}
