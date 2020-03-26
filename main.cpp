//Student: Orlando Valdez
//Teacher: Dr_T
//03-20-20

#include "Functions.h"

int main ()
{
  string option = "";
  string colorOption = "\x1b[" + to_string(32) + ";1m";//green text
  string reset = "\x1b[0m";
  do
  {
    showMenu();
    cout << "\nPlease Select An Option: " ;
    cout << colorOption;// changes text color to green
    option = validateString(option);// validates user input to correct input
    cout << reset;//resets the text color back to default
    chosenOption(option);

  
  }while(option != "X" && option != "x");
   cout << "\nAdios!" << endl;
  return 0;
}