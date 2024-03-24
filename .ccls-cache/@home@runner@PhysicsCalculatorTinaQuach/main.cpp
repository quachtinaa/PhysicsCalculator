// Student: Tina Quach - 3/20/2024
// Credit to Dr.T for framework + input validation 
// Credit to McMillanite James Orr and Dr.T for the colors solution
#include <iostream>
#include <string>
#include "input_validation.h"
#include <iomanip>

using namespace std; 


// prototypes
void showMenu(); 
void calcVelocity(); 
void calcMotion(); 
void calcAcceleration();
void calcNewtonsSecondLaw();
void calcWeight();
void calcMomentum();

int main() 
{
  // variables
  int choice = 0;
  string color;
  string reset = "\x1b[0m";
  
  do
  {
    showMenu(); // call the show menu function to display menu
    cout << "\nenter your choice, ";
    choice = validateInt(choice); // validates if choice is an int and not anything else
      
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
  
  } while (choice != 7); // do-while loop will keep looping as long as the choice isn't 7; if choice is 7, the loop will end.
  
  return 0; 
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
  cout << color << " weight\n";
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
  string color;
  string reset = "\x1b[0m";
  
  cout << "\nVelocity Calculator\n";
  cout << "-------------------\n";
  
  // ask user for ds, dt, and their units
  cout << "Enter ds, ";
  ds = validateDouble(ds);

  cout << "\nEnter ds's units, ";
  dsUnit = validateString(dsUnit);
  
  cout << "\nEnter dt, ";
  dt = validateDouble(dt);

  cout << "\nEnter dt's units, ";
  dtUnit = validateString(dtUnit);

  // display the results
  color = "\x1b[" + to_string(32) + ";"+to_string(34)+"m";
  cout << color;
  cout << setprecision(4) << "\nVelocity given " << ds << " "<< dsUnit << " and " << dt << " " << dtUnit << " is " << ds/dt << " " << dsUnit << "/" << dtUnit << endl;
  cout << reset;
  
}

void calcAcceleration()
{
  // variables
  double dv = 0.0, dt = 0.0; 
  string dvUnit = "", dtUnit = "";
  string color;
  string reset = "\x1b[0m";

  cout << "\nAcceleration Calculator\n";
  cout << "-------------------\n";
  
  // ask user for ds, dt, and their units
  cout << "Enter dv, ";
  dv = validateDouble(dv);

  cout << "\nEnter dv's units, ";
  dvUnit = validateString(dvUnit);

  cout << "\nEnter dt, ";
  dt = validateDouble(dt);

  cout << "\nEnter dt's units, ";
  dtUnit = validateString(dtUnit);

  // display the results
  color = "\x1b[" + to_string(32) + ";"+to_string(31)+"m";
  cout << color;
  cout << setprecision(4) << "\nVelocity given " << dv << " "<< dvUnit << " and " << dt << " " << dtUnit << " is " << dv/dt << " " << dvUnit << "/" << dtUnit << endl;
  cout << reset;
}

void calcMotion()
{
  // variables
  char motionChoice = '\0';
  double Ma = 0.0, v0 = 0.0, a = 0.0, t = 0.0, v = 0.0;

  
  cout << "\nMotion Calculator Menu\n";
  cout << "A. Ma = solve for v" << endl;
  cout << "B. Ms = solve for s" << endl;
  cout << "C. Mv2 = solve for v^2" << endl;
  cout << "D. Mv = solve for v_bar" << endl;
  cout << "Option, ";
  motionChoice = validateChar(motionChoice);

  if (motionChoice == 'A' || motionChoice == 'a')
  {
    cout << "\nEnter v0: ";
    cin >> v0; 
    cout << "\nEnter a: ";
    
    cin >> a;
    cout << "\nEnter t: ";
    cin >> t; 
    v = v0 + (a * t); 
    cout << "\nVelocity = " << v << endl;
  }
    
  else if (motionChoice == 'b' || motionChoice == 'B')
  {
    //solve for Ms
  }
    
  else if (motionChoice == 'c' || motionChoice == 'C')
  {
    //solve for Mv2
  }

  else if (motionChoice == 'd' || motionChoice == 'D')
  {
    // solve for Mv
  }
  else // if user enters another choice that isn't a number A-D
  {
    cout << "\nInvalid choice. Try again. " << endl;
  }
}

void calcNewtonsSecondLaw()
{
  cout << "this is newton's second law";
}

void calcWeight()
{
  cout << "this is weight";
}

void calcMomentum()
{
  cout << "this is momentum";
}