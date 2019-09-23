//Authors:Luis Barrera
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables

string firstName;
string lastName;

  //get user input

cout<< "What is your first name? ";
cin>> firstName; 

cout<< "What is your last name? ";
cin>> lastName;


cout<< "wellcome, " <<firstName[0]<< "."<<lastName[0]<<". here is your fortune"; 

  //tell fortune

  return 0;
}
