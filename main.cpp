//Dr. T help on Unit 1 Assignment COSC-1437 Dr. Tyson McMillan, code
//Student: Type your Name
#include <iostream>
using namespace std; 

void showMenu(); 
void calcVelocity(); 
void calcMotion(); 

int main() 
{
  int choice = 0;
  do
  {
      showMenu(); // call the show menu function
      cin >> choice; 
      if(choice == 1)
      {
        calcVelocity(); //call the calcVelocity() function
      }
      else if(choice == 2)
      {
        //calcAcceleration() 
      }
      else if(choice == 3)
      {
        //calcMotion()
        calcMotion(); 
      }
  }while(choice != 7);  
  return 0; 
}

void showMenu()
{
  cout << "Menu\n";
  cout << "1. calc velocity\n";
  cout << "2. calc acceleration\n";
  cout << "3. calc motion\n";
  cout << "4. calc newton's 2nd law\n";
  cout << "5. calc weight\n";
  cout << "6. calc momentum\n";
  cout << "7. Exit\n";
  cout << "8. clear screen\n";
  cout << "Enter your choice: ";
}

void calcVelocity()
{
  double ds = 0.0, dt = 0.0; // ds = ds (distance)
  cout << "Velocity Calculator\n";
  cout << "Enter ds (d = ds): ";
  cin >> ds; 
  cout << "Enter dt (d = dt): ";
  cin >> dt; 
  cout << "Velocity = " << ds / dt << endl;
  
}

void calcMotion()
{
  char motionChoice = '\0';
  double Ma = 0.0, v0 = 0.0, a = 0.0, t = 0.0, v = 0.0;
  cout << "\nMotion Calculator Menu\n";
  cout << "A. Ma = solve for v" << endl;
  cout << "B. Ms = solve for s" << endl;
  cout << "C. Mv2 = solve for v^2" << endl;
  cout << "D. Mv = solve for v_bar" << endl;
  cout << "Option: ";
  cin >> motionChoice; 

  if(motionChoice == 'A' || motionChoice == 'a')
  {
    cout << "\nPlease enter v0: ";
    cin >> v0; 
    cout << "\nPlease enter a: ";
    cin >> a;
    cout << "\nPlease enter t: ";
    cin >> t; 
    v = v0 + (a * t); 
    cout << "\nVelocity = " << v << endl;
  }
  else if(motionChoice == 'b' || motionChoice == 'B')
  {
    //solve for Ms
  }
}