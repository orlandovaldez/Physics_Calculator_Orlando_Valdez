//Student: Orlando Valdez
//Teacher: Dr_T
//School: Tarrant County College
//Date: 03-20-20
//Purpose: To create a menu driven program that will disply an anwser depending on user data inputted on equation data inputted 
//Skills: Menu Driven Loops, Header Files, Input Validation

#include "Functions.h"
#include <iomanip>

int main ()
{
  string option = "";
  string colorOption = "\x1b[" + to_string(32) + ";1m";//green text
  string reset = "\x1b[0m";
  
  do
  {
    showMenu();
    cout << fixed << setprecision(4);//sets the place value to 4 places for the outputs
    cout << "\nPlease Select An Option: ";
    cout << colorOption;// changes text color to green
    option = validateString(option);// validates user input to correct input
    cout << reset;//resets the text color back to default
    chosenOption(option);

  
  }while(option != "E" && option != "e");
   cout << "\nAdios!" << endl;
  return 0;
}