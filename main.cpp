//Authors:Luis Barrera
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables

string firstName;
string lastName;
int lucky;
int index= lastName.length()-1;
char firstLetter;
char lastLetter;
  //get user input

cout<<"What is your first name?"<<endl;
cin>> firstName; 

cout<< "What is your last name?"<<endl;
cin>> lastName;


cout<< "Welcome, " <<firstName[0]<< "."<<lastName[0]<<"., here is your fortune..."<<endl; 

  //tell fortune
 

cout<< "your lucky number is " << firstName .length ()<< endl; 

firstLetter=tolower(firstName[0]);


if (firstLetter== 'a' || firstLetter== 'e' || firstLetter== 'i' || firstLetter == 'o' || firstLetter=='u')
{
        cout<< "you are destined to be famous."<<endl;
}
else
{
        cout<< "you should keep a low profile."<<endl;
}

lastLetter=tolower(lastName[index]);

if(lastLetter== 'a' || lastLetter== 'e' || lastLetter== 'i' || lastLetter== 'o' || lastLetter== 'u')
{
        cout<<"you have already met your true love."<<endl;
}

cout<< "have a good day!"<<endl;

  return 0;
}
