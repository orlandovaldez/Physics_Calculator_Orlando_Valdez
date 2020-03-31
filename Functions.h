


#include <iostream>
#include <iomanip>
#include <cmath>
#include "Input_Validation_Extended.h"
using namespace std;

void showMenu();
void chosenOption(string);
void calculateVelocity();
void calculateAcceleration();
void calculateMotion();
void calculateForce();
void calculateWeight();
void calculateMomentum();



void showMenu()
{
  cout << "\nPhysics Calculator Menu" << endl;
  cout << "A: Velocity " << endl;
  cout << "B: Acceleration" << endl;
  cout << "C: Motion" << endl;
  cout << "D: Newton's Second Law" << endl;
  cout << "F: Weight(Earth)" << endl;
  cout << "G: Momentum" << endl;
  cout << "E: Exit " << endl;
  cout << "Z: To Clear The Screen" << endl;
}
void chosenOption(string option)//option selection depending on user input validated
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
    calculateMotion();
  }
  else if(option == "D" || option == "d")
  {
    calculateForce();
  }
  else if(option == "F" || option == "f")
  {
    calculateWeight();
  }
  else if(option == "G" || option == "g")
  {
    calculateMomentum();
  }
  else if(option == "Z" || option == "z")//clears the whole screen 
  {
    string reset = "\x1b[0m";
    cout << reset;
    cout << "\033[2J\033[1;1H";
    system("clear");

  }
  else if(option == "E" || option == "e")// exits the Program
  {
    cout << "\nExiting The Program..." << endl;
  }
  else
  {
    cout << "\nInvalid Option Try Again." << endl;//if user input is invalid this will be displayed until proper input is entered.
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

    cout << ds << " / " << dt << " = " << color << V << reset << " " << dsUnits << "/" << dtUnits << endl;
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

  cout << dv << " / " << dt << " = " << color << V << reset << " " << dvUnits << "/" << dtUnits << endl;
}


void calculateMotion()
{
  string color = "\x1b[" + to_string(31) + ";1m";
  string reset = "\x1b[0m";
  double motionOption = 0;

  cout << color;
  cout << "\nEquations of Motion Calculator" << endl;
  cout << reset;
  cout << "\nChoose an option(1-4)"  << endl;  
  cout << "\n(1)Ma = solve for v ";
  cout << "\n(2)Ms = solve for s ";
  cout << "\n(3)Mv2 = solve for v^2 ";
  cout << "\n(4)Mv = solve for v_bar " << endl;
  cout << color;
  motionOption = validateDouble(motionOption);
  cout << reset;

  
      
  if(motionOption == 1)//v = v0 + at
  {
    double constantTerm , firstTerm, v= 0.0;
    cout << "\nSolving For V " << endl;
    cout << "\nEnter input for Constant Term " << endl;
    constantTerm = validateDouble(constantTerm);
    cout << "\nEnter input for First Term "<< endl;
    firstTerm = validateDouble(firstTerm);
    v = (constantTerm + firstTerm);

    cout << "\nFinal Velocity is equal to " << endl;
    cout << constantTerm << " + " << firstTerm << " = " << color << v << reset << " m/s" << endl;
  }
  else if(motionOption == 2)//s = s0 + v0t + ½at^2
  {
    double constantTerm, firstTerm, secondTerm,s = 0.0;
    cout << "\nSolving For S " << endl;
    cout << "\nEnter Constant Term " << endl;
    constantTerm = validateDouble(constantTerm);
    cout << "\nEnter First Term " << endl;
    firstTerm = validateDouble(firstTerm);
    cout << "\nEnter Second Term " << endl;
    secondTerm = validateDouble(secondTerm);
    s = constantTerm + firstTerm + ((0.5)*(secondTerm * secondTerm));

    cout << "\nDisplacement is Equal to " << endl;
    cout << constantTerm << " + " << firstTerm << " + " << "(1/2)" << secondTerm << "^2" << " = " << color << s << " "<< reset << endl;

  }
  else if(motionOption == 3)//v2 = v0^2 + 2a(s − s0)
  {
    double v0, a, s, s0, v2 = 0.0;
    cout << "\nSolving For v^2 " << endl;
    cout << "\nEnter Value for v0 : " << endl;
    v0 = validateDouble(v0);
    cout << "\nEnter Value for a :" << endl;
    a = validateDouble(a);
    cout << "\nEnter Value for s :" << endl;
    s = validateDouble(s);
    cout << "\nEnter Value for s0 :" << endl;
    s0 = validateDouble(s0);

    v2 = (v0 * v0) + (a + a) * (s -s0);
    cout << color << "\nV^2 is Equal to " << endl;
    cout << "(" << v0 << " * " << v0 << ") + (" << a << "+" << a << ") * (" << s << " - " << s0 << ") = " << color << v2 << reset << endl;

  }
  else if(motionOption == 4)//v̅ = ½(v + v0)
  {
    double v̅, v , v0 = 0.0;
    cout << "\nSolving For v_bar " << endl;
    cout << "\nEnter value for v : " << endl;
    v = validateDouble(v);
    cout << "\nEnter value for v0 : " << endl;
    v0 = validateDouble(v0);
    v̅ = (0.5 * (v + v0));
    cout << "\nv_bar is equal to " << endl;
    cout << "½(" << v << " + " << v0 << ") = " << color << v̅ << reset << endl;
  }
  else
  {
    cout << "\nInvalid Input try again" << endl;
    
  }

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
void calculateMomentum()
{
  double m,v, p = 0.0;
  string mUnits, vUnits;
  string color = "\x1b[" + to_string(31) + ";1m";
  string reset = "\x1b[0m";
  cout << color;
  cout << "\nMomentum Calculator" << endl;
  cout << reset;
  cout << "\nWhat is the initial mass of the object? " << endl;
  m = validateDouble(m);
  cout << "\nWhat is the Unit of Measure Output? (ie. kg m/s)" << endl;
  mUnits = validateString(mUnits);
  cout << "\nWhat is the initial veleocity of the object? " << endl;
  v = validateDouble(v);
  cout << "\nWhat is the Unit of Measure Output for Velocity? " << endl;
  vUnits = validateString(vUnits);
  p = (m * v);
  cout << "\nMass * Velocity = Momentum" << endl;
  cout << m << " * " << v << " = " << color << p << reset << mUnits << " " << vUnits << "/s" << endl;


}


//gonna be a menu on menu order
// for momentum theres gonna be a main item with a submenu about it 