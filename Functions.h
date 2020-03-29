


#include <iostream>
#include <iomanip>
#include "Input_Validation_Extended.h"
using namespace std;

void showMenu();
void chosenOption(string);
void calculateVelocity();
void calculateAcceleration();
void calculateForce();
void calculateWeight();


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
  if(option == "A" || option == "a")
  {
    calculateVelocity();
  }
  else if(option == "B" || option == "b")
  {
    calculateAcceleration();
  }
  else if(option == "C" || option == "c")
  {

    cout << "\nMotion Calculator" << endl;

  }
  else if(option == "D" || option == "d")
  {
    calculateForce();
  }
  else if(option == "E" || option == "e")
  {
    calculateWeight();
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
void calculateVelocity()
{
    string color = "\x1b[" + to_string(31) + ";1m";
    string reset = "\x1b[0m";
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
void calculateAcceleration()
{
  string color = "\x1b[" + to_string(31) + ";1m";
  string reset = "\x1b[0m";
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
void calculateForce()
{
  string color = "\x1b[" + to_string(31) + ";1m";
  string reset = "\x1b[0m";
  
  double m,a = 0.0;
  string mUnits, aUnits;
  cout << color;
  cout << "\nNewton's Second Law (Force) Calculator" << endl;
  cout << reset;
  cout << "\nWhat is the Mass? " << endl;
  m = validateDouble(m);
  cout << "\nWhat is the Mass Unit of Measure?(kg or lb)" << endl;
  mUnits = validateString(mUnits);
  cout << "\nWhat is the rate of Acceleration? " << endl;
  a = validateDouble(a);
  cout << "\nWhat is the Acceleration Unit of Measure?(m,cm,ft,in.)" << endl;
  aUnits =validateString(aUnits);
  
  double N = ( m * a );
  cout << m << " * " << a << " = " << color << N << reset << " " << mUnits << " " << aUnits << "/s^2" << endl; 
  
}
void calculateWeight()
{
  string color = "\x1b[" + to_string(31) + ";1m";
  string reset = "\x1b[0m";

  double m,w = 0.0;//initializes mass and weight for varibales as doubles
  double g = 9.8;//sets the gravity rate for Earth at 9.8 m/s
  string mUnits, gUnits;

  cout << color;
  cout << "\nWeight(Earth) Calculator" << endl;
  cout << reset;
  cout << "\nWhat is the initial mass? " << endl;
  m = validateDouble(m);
  cout << "\nWhat is the Unit of Measure Output?(ie. lbs,stone) " << endl;
  mUnits =validateString(mUnits);
  w = m * g;
  cout << "\nMass * Gravity = Weight " << endl;
  cout << m << " * " << g << " = " << color << w << reset << mUnits << endl;


}