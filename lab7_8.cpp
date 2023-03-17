#include <iostream>
#include <fstream> // needed for file i/o
using namespace std;
int main() {

 //banner

cout<<"--------------------------------"<<endl;
cout<< "Aidenn Diaz" << endl;
cout<< "Computer Science 1"<<endl;
cout<< "CRN, 26249"<<endl;
cout<< "Lab 7 q.8"<< endl;
cout<< "March 10, 2023" << endl;
cout<<"--------------------------------\n"<<endl;

//declaring variables

ifstream fin;//declaring input file
ofstream fout;//output file
int count = 0;
int uchoice; //user choice 
string sname;//student name
string fname;//file name
double grade;//student grade
double total = 0;//total of grades
double avg;//average of student grades
int c;//user choice


while(c != 4) {//when 4 ends program
  cout << endl << endl;
  cout << "gradebook application Menu" << endl << endl;
  cout << "1 : create file of students names and grades" << endl;
  cout << "2 : display all students grades from file" << endl;
  cout << "3 : calculate average of each students grades from file" << endl;
  cout << "Enter 4 to exit the program" << endl << endl;
  cout << "Enter the option 1, 2, 3, or 4" << endl;
  cin >> c;//user chooses which case is used
  switch(c) {
    case 1: //makes file
    count = 0;
    cout << "enter the name of the file\n" ;
    cin>> fname;
    fout.open(fname);
    cout << "if you want to add a student enter 1\n" ;
    cout << "if not enter 2\n" ;
    cin >> uchoice;
    while(uchoice == 1){
      cout << "enter the name of the student\n" ;
      cin >> sname;
      fout << sname << endl;
      cout << "enter the 4 grades of the student\n" ;
      for(count = 1;count <= 3;count++){
        //gets three grades and makes new line
        cout << "enter grade " << count << endl;
        cin >> grade;
        fout << grade << endl;
      }
      cout << "enter grade " << count << endl;
      //gets grade without new line
      cin >> grade;
      fout << grade;
      cout << "if you want to add a student enter 1\n" ;
      cout << "if not enter 2\n" ;
      cin >> uchoice;
      if(uchoice == 1)
        fout << endl;
      }
    fout.close();
    break;

    case 2: //read file
    count = 0;
    //input validation
    cout << "enter the name of the file\n" ;
    cin>> fname ;
    fin.open(fname);
    while(!fin)
    {
      cout << "file name invalid please try gain\n";
      cin >> fname;
      fin.open(fname);
    }
    while(fin >> sname)
      cout << sname << endl;
      while(fin >> grade && count !=4){
        count = count +1;
        cout << grade << endl;
      }
    fin.close();
    break;

    case 3: // read file and calulate each students average
    count = 0;
    cout << "enter the name of the file\n" ;
    cin>> fname ;
    fin.open(fname);
    while(!fin){
      cout << "file name invalid please try gain\n";
      cin >> fname;
      fin.open(fname);
}
    while(fin >> sname)//loops while inputing sname from file
      {
      cout << sname << endl;
      while(count !=4 && fin >> grade)// reads four grades then stops
        {
        count = count +1;
          cout<<grade<<endl;
     //   cout << o3c << endl;
        total = total + grade;
        }
     
      cout << sname<< "'s grades totalled to " << total << endl;
      avg = (total/count);
      cout << "the average grade of " << sname << " is " << avg << endl;
      count = 0;
      total = 0;
      }
    
    fin.close();
    break;
  
        



    
    }
    
  }

  }
