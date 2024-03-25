#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include "input_validation.h"

using namespace std;

// prototypes
void showMenu();
void calcVelocity(), calcMotion(), calcAcceleration(), calcNewtonsSecondLaw(), calcWeight(), calcMomentum();
void calcV(), calcS(), calcVSquared(), calcVBar();
void handleChoice(int);

// function for user to choose
void handleChoice(int choice)
{

  if (choice == 1)
  {
    calcVelocity(); //call the calcVelocity() function
  }

  else if (choice == 2)
  {
    calcAcceleration(); // call the calcAcceleration() function
  }

  else if (choice == 3)
  {
    calcMotion(); // call the calcMotion() function
  }

  else if (choice == 4)
  {
    calcNewtonsSecondLaw(); // call the calcNewtonsSecondLaw() function
  }

  else if (choice == 5)
  {
    calcWeight(); // call the calcWeight() function
  }

  else if (choice == 6)
  {
    calcMomentum(); // call the calcMomentum() function
  }

  else if (choice == 7) // choice for exiting the program
  {
    cout << "Exiting program... Bye!\n";
    exit(0);
  }

  else if (choice == 8) // choice for clearing the screen
  {
    string reset = "\x1b[0m";
    //Linux Umbunu
    cout << reset; 
    cout << "\033[2J\033[1;1H";  //for ubuntu Linux Option 1 of 2
    //Windows: system("cls"); 
    system("clear"); //for ubuntu Linux Option 2 of 2
  }
  else // if user enters another choice that isn't a number 1-8
  {
    cout << "\nInvalid choice. Try again. " << endl;
  }
}

// function to display menu
void showMenu()
{
  // variables
  string color;
  string reset = "\x1b[0m";

  cout << "\nMenu\n";

  cout << "1. calculate";
  color = "\x1b[" + to_string(32) + ";"+to_string(34)+"m";
  cout << color << " velocity\n";
  cout << reset;

  cout << "2. calculate";
  color = "\x1b[" + to_string(32) + ";"+to_string(31)+"m";
  cout << color << " acceleration\n";
  cout << reset;

  cout << "3. calculate";
  color = "\x1b[" + to_string(32) + ";"+to_string(35)+"m";
  cout << color << " motion\n";
  cout << reset;

  cout << "4. calculate";
  color = "\x1b[" + to_string(32) + ";"+to_string(91)+"m";
  cout << color << " newton's 2nd law\n";
  cout << reset;

  cout << "5. calculate";
  color = "\x1b[" + to_string(32) + ";"+to_string(92)+"m";
  cout << color << " weight (earth)\n";
  cout << reset;

  cout << "6. calculate";
  color = "\x1b[" + to_string(32) + ";"+to_string(94)+"m";
  cout << color << " momentum\n";
  cout << reset;

  cout << "7. exit\n";
  cout << "8. clear screen\n";
}

void calcVelocity()
{
  // variables
  double ds = 0.0, dt = 0.0; 
  string dsUnit = "", dtUnit = "";
  string color = "\x1b[" + to_string(32) + ";"+to_string(34)+"m";
  string reset = "\x1b[0m";

  cout << color << "\nVelocity Calculator\n" << reset;
  cout << "-------------------\n";

  // ask user for variables
  cout << "Enter ds (speed), ";
  ds = validateDouble(ds);

  cout << "\nEnter ds's units, ";
  dsUnit = validateString(dsUnit);

  cout << "\nEnter dt (time), ";
  dt = validateDouble(dt);

  cout << "\nEnter dt's units, ";
  dtUnit = validateString(dtUnit);

  // display the results
  cout << color;
  cout << setprecision(4) << "\nGiven a speed of " << ds << " "<< dsUnit << " and a time of " << dt << " " << dtUnit << ", velocity is " << ds/dt << " " << dsUnit << "/" << dtUnit << endl;
  cout << reset;
}

void calcAcceleration()
{
  // variables
  double dv = 0.0, dt = 0.0; 
  string dvUnit = "", dtUnit = "";
  string color = "\x1b[" + to_string(32) + ";"+to_string(31)+"m";
  string reset = "\x1b[0m";

  cout << color << "\nAcceleration Calculator\n" << reset;
  cout << "-----------------------\n";

  // ask user for variables
  cout << "Enter dv (velocity), ";
  dv = validateDouble(dv);

  cout << "\nEnter dv's units, ";
  dvUnit = validateString(dvUnit);

  cout << "\nEnter dt (time), ";
  dt = validateDouble(dt);

  cout << "\nEnter dt's units, ";
  dtUnit = validateString(dtUnit);

  // display the results
  cout << color;
  cout << setprecision(4) << "\nGiven a velocity of " << dv << " "<< dvUnit << " and a time of " << dt << " " << dtUnit << ", acceleration is " << dv/dt << " " << dvUnit << "/" << dtUnit << endl;
  cout << reset;
}

void calcMotion()
{
  // variables
  char motionChoice = '\0';
  double Ma = 0.0, v0 = 0.0, a = 0.0, t = 0.0, v = 0.0;
  string color = "\x1b[" + to_string(32) + ";"+to_string(35)+"m";
  string reset = "\x1b[0m";

  // display menu
  do
  {
    cout << color << "\nMotion Calculator Menu\n" << reset;
    cout << "A. Ma = solve for v" << endl;
    cout << "B. Ms = solve for s" << endl;
    cout << "C. Mv2 = solve for v^2" << endl;
    cout << "D. Mv = solve for v_bar" << endl;
    cout << "Enter your choice, ";
    motionChoice = validateChar(motionChoice);

    if (motionChoice == 'A' || motionChoice == 'a')
    {
      calcV();
    }

    else if (motionChoice == 'b' || motionChoice == 'B')
    {
      calcS();
    }

    else if (motionChoice == 'c' || motionChoice == 'C')
    {
      calcVSquared();
    }

    else if (motionChoice == 'd' || motionChoice == 'D')
    {
      calcVBar();
    }
    else // if user enters another choice that isn't a number A-D
    {
      cout << "\nInvalid choice. Try again. " << endl;
    }
  } while (true);
}

void calcV()
{
  // variables
  double v0 = 0.0, a = 0.0, t = 0.0; 
  string v0Unit = "", aUnit = "", tUnit = "";
  string color = "\x1b[" + to_string(32) + ";"+to_string(35)+"m";
  string reset = "\x1b[0m";

  cout << color << "\nMotion - Velocity-Time Calculator\n" << reset;
  cout << "----------------------------------\n";

  // ask user for variables
  cout << "Enter V0 (initial velocity), ";
  v0 = validateDouble(v0);

  cout << "\nEnter m's units, ";
  v0Unit = validateString(v0Unit);

  cout << "\nEnter a (acceleration), ";
  a = validateDouble(a);

  cout << "\nEnter a's units, ";
  aUnit = validateString(aUnit);

  cout << "\nEnter t (time), ";
  t = validateDouble(t);

  cout << "\nEnter t's units, ";
  tUnit = validateString(tUnit);

  // display the results
  cout << color;
  cout << setprecision(4) << "\nGiven an initial velocity of " << v0 << " "<< v0Unit << ", an acceleration of " << a << " " << aUnit << " and a time of " << t << " " << tUnit << ", the final velocity is " << v0 + (a * t) << " " << v0Unit << endl;
  cout << reset;
}

void calcS()
{
  // variables
  double s0 = 0.0, v0 = 0.0, t = 0.0, a = 0.0;
  string s0Unit = "", v0Unit = "", tUnit = "", aUnit = "";
  string color = "\x1b[" + to_string(32) + ";"+to_string(35)+"m";
  string reset = "\x1b[0m";

  cout << color << "\nDisplacement Calculator\n" << reset;
  cout << "-----------------------\n";

  // ask user for variables
  cout << "Enter s0 (intial displacement), ";
  s0 = validateDouble(s0);

  cout << "\nEnter s0's units, ";
  s0Unit = validateString(s0Unit);

  cout << "\nEnter v0 (initial velocity), ";
  v0 = validateDouble(v0);

  cout << "\nEnter v0's units, ";
  v0Unit = validateString(v0Unit);

  cout << "\nEnter t (time), ";
  t = validateDouble(t);

  cout << "\nEnter t's units, ";
  tUnit = validateString(tUnit);

  cout << "\nEnter a (acceleration), ";
  a = validateDouble(a);

  cout << "\nEnter a's units, ";
  aUnit = validateString(aUnit);

  // display the results
  cout << color;
  cout << setprecision(4) << "\nGiven an initial displacement of " << s0 << " "<< s0Unit << ", an intial velocity of " << v0 << " " << v0Unit << ", a time of " << t << " " << tUnit << " and an acceleration of " << a << " " << aUnit << ", the final displacement is "<< s0 + (v0 * t) + (0.5 * a * pow(t, 2)) << " " << s0Unit << endl;
  cout << reset;
}

void calcVSquared()
{
  // variables
  double s0 = 0.0, v0 = 0.0, t = 0.0, a = 0.0, s = 0.0;
  string s0Unit = "", v0Unit = "", tUnit = "", aUnit = "", sUnit = "";
  string color = "\x1b[" + to_string(32) + ";"+to_string(35)+"m";
  string reset = "\x1b[0m";

  cout << color << "\nVelocity Squared Calculator\n" << reset;
  cout << "-----------------------\n";

  // ask user for variables

  cout << "\nEnter s0 (intial displacement), ";
  s0 = validateDouble(s0);

  cout << "\nEnter s0's units, ";
  s0Unit = validateString(s0Unit);

  cout << "Enter s (final displacement), ";
  s = validateDouble(s);

  cout << "\nEnter s's units, ";
  sUnit = validateString(sUnit);

  cout << "\nEnter v0 (initial velocity), ";
  v0 = validateDouble(v0);

  cout << "\nEnter v0's units, ";
  v0Unit = validateString(v0Unit);

  cout << "\nEnter t (time), ";
  t = validateDouble(t);

  cout << "\nEnter t's units, ";
  tUnit = validateString(tUnit);

  cout << "\nEnter a (acceleration), ";
  a = validateDouble(a);

  cout << "\nEnter a's units, ";
  aUnit = validateString(aUnit);

  // display the results
  cout << color;
  cout << setprecision(4) << "\nGiven an initial displacement of " << s0 << " "<< s0Unit << " and a final displacement of " << s << " " << sUnit << ", an intial velocity of " << v0 << " " << v0Unit << ", a time of " << t << " " << tUnit << " and an acceleration of " << a << " " << aUnit << ", velocity squared is " << pow(v0,2) + 2 * a * (s-s0) << " " << v0Unit << endl;
  cout << reset;
}

void calcVBar()
{
  // variables
  double v = 0.0, v0 = 0.0;
  string v0Unit = "", vUnit = "";
  string color = "\x1b[" + to_string(32) + ";"+to_string(35)+"m";
  string reset = "\x1b[0m";

  cout << color << "\nAverage Velocity Calculator\n" << reset;
  cout << "-----------------------\n";

  // ask user for variables

  cout << "\nEnter v (final velocity), ";
  v = validateDouble(v);

  cout << "\nEnter v's units, ";
  vUnit = validateString(vUnit);

  cout << "\nEnter v0 (initial velocity), ";
  v0 = validateDouble(v0);

  cout << "\nEnter v0's units, ";
  v0Unit = validateString(v0Unit);

  // display the results
  cout << color;
  cout << setprecision(4) << "\nGiven an initial velocity of " << v0 << " "<< v0Unit << " and a final velocity of " << v0 << " " << v0Unit << ", the average velocity is " << 0.5 * (v + v0) << " " << vUnit << endl;
  cout << reset;
}


void calcNewtonsSecondLaw()
{
  // variables
  double m = 0.0, a = 0.0; 
  string mUnit = "", aUnit = "";
  string color = "\x1b[" + to_string(32) + ";"+to_string(91)+"m";
  string reset = "\x1b[0m";

  cout << color << "\nNetwon's Second Law Calculator\n" << reset;
  cout << "------------------------------\n";

  // ask user for variables
  cout << "Enter m (mass), ";
  m = validateDouble(m);

  cout << "\nEnter m's units, ";
  mUnit = validateString(mUnit);

  cout << "\nEnter a (acceleration), ";
  a = validateDouble(a);

  cout << "\nEnter a's units, ";
  aUnit = validateString(aUnit);

  // display the results
  cout << color;
  cout << setprecision(4) << "\nGiven a mass of " << m << " "<< mUnit << " and an acceleration of " << a << " " << aUnit << ", Newton's second law calculates force as " << m * a << " " << mUnit << " * " << aUnit << endl;
  cout << reset;
}

void calcWeight()
{
  // variables
  double m = 0.0, g = 0.0; 
  string mUnit = "", gUnit = "";
  string color = "\x1b[" + to_string(32) + ";"+to_string(92)+"m";
  string reset = "\x1b[0m";

  cout << color << "\nWeight (Earth) Calculator\n" << reset;
  cout << "-------------------------\n";

  // ask user for variables
  cout << "Enter m (mass), ";
  m = validateDouble(m);

  cout << "\nEnter m's units, ";
  mUnit = validateString(mUnit);

  cout << "\nEnter g (Earth's gravity), ";
  g = validateDouble(g);

  cout << "\nEnter g's units, ";
  gUnit = validateString(gUnit);

  // display the results
  cout << color;
  cout << setprecision(4) << "\nGiven a mass of " << m << " "<< mUnit << " and a gravity of " << g << " " << gUnit << ", weight is " << m * g << " " << mUnit << " * " << gUnit << endl;
  cout << reset;
}

void calcMomentum()
{
  // variables
  double m = 0.0, v = 0.0; 
  string mUnit = "", vUnit = "";
  string color = "\x1b[" + to_string(32) + ";"+to_string(94)+"m";
  string reset = "\x1b[0m";

  cout << color << "\nMomentum Calculator\n" << reset;
  cout << "-------------------\n";

  // ask user for variables
  cout << "Enter m (mass), ";
  m = validateDouble(m);

  cout << "\nEnter m's units, ";
  mUnit = validateString(mUnit);

  cout << "\nEnter v (velocity), ";
  v = validateDouble(v);

  cout << "\nEnter v's units, ";
  vUnit = validateString(vUnit);

  // display the results
  cout << color;
  cout << setprecision(4) << "\nGiven a mass of " << m << " "<< mUnit << " and a velocity of " << v << " " << vUnit << ", momentum is " << m * v << " " << mUnit << " * " << vUnit << endl;
  cout << reset;
}

#endif