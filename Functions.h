


#include <iostream>
#include <iomanip>
#include "Input_Validation_Extended.h"
using namespace std;

void showMenu();
void chosenOption(string);

void showMenu()
{
  cout << "\nPhysics Calculator Menu" << endl;
  cout << "A: Velocity " << endl;
  cout << "B: Acceleration" << endl;
  cout << "C: Motion" << endl;
  cout << "D: Newton's Second Law" << endl;
  cout << "E: Weight(Earth)" << endl;
  cout << "F: Momentum" << endl;
  cout << "X: Exit " << endl;
  cout << "Z: To CLear The Scren" << endl;
}
void chosenOption(string option)
{
  string color = "\x1b[" + to_string(31) + ";1m";
  string reset = "\x1b[0m";

  if(option == "A" || option == "a")
  {
    double ds,dt = 0.0;
    string dsUnits, dtUnits;
    cout << color;
    cout << "\nVelocity Calculator" << endl;
    cout << reset;
    cout << "\nWhat is your distance?" << endl;
    ds = validateDouble(ds);
    cout << "\nWhat is the unit of measure for distance? (km,m,cm,miles,feet,inch)" << endl;
    dsUnits = validateString(dsUnits);
    cout << "\nWhat is your time?" << endl;
    dt = validateDouble(dt);
    cout << "\nWhat is the unit of measure for time? (hour,min,sec)" << endl;
    dtUnits = validateString(dtUnits);

    double V = ds / dt;

    cout << ds << " / " << dt << " = " << V << " " << dsUnits << "/" << dtUnits << endl;


  }
  else if(option == "B" || option == "b")
  {
    double dv,dt = 0.0;
    string dvUnits, dtUnits;
    cout << color;
    cout << "\nAcceleration Calculator" << endl;
    cout << reset;
    cout << "\nWhat is your change in velocity?" << endl;
    dv = validateDouble(dv);
    cout << "\nWhat is the unit of measure for velocity? (km,m,cm,miles,feet,inch)" << endl;
    dvUnits = validateString(dvUnits);
    cout << "\nWhat is your time?" << endl;
    dt = validateDouble(dt);
    cout << "\nWhat is the unit of measure for time? (hour,min,sec)" << endl;
    dtUnits = validateString(dtUnits);

    double V = dv / dt;

    cout << dv << " / " << dt << " = " << V << " " << dvUnits << "/" << dtUnits << endl;

  }
  else if(option == "C" || option == "c")
  {

    cout << "\nMotion Calculator" << endl;

  }
  else if(option == "D" || option == "d")
  {

    cout << "\nNewton's Second Law Calculator " << endl;

  }
  else if(option == "E" || option == "e")
  {

    cout << "\nWeight(Earth) Calculator" << endl;

  }
  else if(option == "F" || option == "f")
  {

    cout << "\nMomentum Calculator" << endl;

  }
  else if(option == "Z" || option == "z")
  {
    string reset = "\x1b[0m";
    cout << reset;
    cout << "\033[2J\033[1;1H";
    system("clear");

  }
  else
  {
    cout << "\nInvalid Option Try Again." << endl;
  }
  

}