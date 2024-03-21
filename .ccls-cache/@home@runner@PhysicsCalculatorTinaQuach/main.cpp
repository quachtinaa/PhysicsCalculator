//Student: Tina Quach - 3/20/2024
#include <iostream>
#include <string>

using namespace std; 

void showMenu(); 
void calcVelocity(); 
void calcMotion(); 
void calcAcceleration();
void calcNewtonsSecondLaw();
void calcWeight();
void calcMomentum();

int main() 
{
  int choice = 0;
  
  do
  {
      showMenu(); // call the show menu function to display menu
      cin >> choice; 
      if (choice == 1)
      {
        calcVelocity(); //call the calcVelocity() function
      }
      else if (choice == 2)
      {
        //calcAcceleration() 
      }
      else if (choice == 3)
      {
        calcMotion(); 
      }
      else if (choice == 4)
      {
        calcNewtonsSecondLaw();
      }
      else if (choice == 5)
      {
        calcWeight();
      }
      else if (choice == 6)
      {
        calcMomentum();
      }
  } while (choice != 7);  
  return 0; 
}

// function to display menu
void showMenu()
{
  cout << "\nMenu\n";
  cout << "1. calculate velocity\n";
  cout << "2. calculate acceleration\n";
  cout << "3. calculate motion\n";
  cout << "4. calculate newton's 2nd law\n";
  cout << "5. calculate weight\n";
  cout << "6. calculate momentum\n";
  cout << "7. exit\n";
  cout << "8. clear screen\n";
  cout << "\nenter your choice: ";
}

void calcVelocity()
{
  double ds = 0.0, dt = 0.0; // ds = ds (distance)
  cout << "\nVelocity Calculator\n";
  cout << "Enter ds (d = ds): ";
  cin >> ds; 
  cout << "Enter dt (d = dt): ";
  cin >> dt; 
  cout << "Velocity = " << ds / dt << "km/hour" << endl;
  
}

void calcAcceleration()
{

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

void calcNewtonsSecondLaw()
{
  
}

void calcWeight()
{
  
}

void calcMomentum()
{
  
}