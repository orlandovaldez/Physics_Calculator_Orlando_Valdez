//Student: Orlando Valdez
//Teacher: Dr_T
//03-24-2020

#include "Functions.h"


int main()
{
  string option = "";

  string color = "\x1b[" + to_string(32) + ";1m";

  string reset = "\x1b[0m";

  do
  {
    showMenu();
    //call function and ask for user input
    cout << "\Enter an option(A-F): ";
    cout << color;
    option = validateString(option);
    cout << reset; //resets the string



    
  }while(option != "e"  );
    


  return 0;
}