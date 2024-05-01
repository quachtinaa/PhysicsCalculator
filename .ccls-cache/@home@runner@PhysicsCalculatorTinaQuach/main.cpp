// Student: Tina Quach
// Date: 3/20/2024
// Class: COSC-1437-58002 OOP Dr. T
// Program: a physics calculator that can calculate multiple physics formulas
// Skills: Header files, 
// Credit to Dr.T for framework + input validation 
// Credit to McMillanite James Orr and Dr.T for the colors solution

#include <iostream>
#include <string>
#include "functions.h"

using namespace std; 

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

    handleChoice(choice); // call choice options function
  
  } while (choice != 7); // do-while loop will keep looping as long as the choice isn't 7; if choice is 7, the loop will end.
  
  return 0; 
}