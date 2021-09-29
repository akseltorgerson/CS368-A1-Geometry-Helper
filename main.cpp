// Aksel Torgerson
// atorgerson

#include <iostream>
#include "functions.h"

using namespace std;

//
// Helper menu print functions.
//
void printMainMenu() {
  cout << "Welcome to Geometry Helper!" << endl;
  cout << "[1] Calculate a 2D area" << endl;
  cout << "[2] Calculate a 3D volume" << endl;
  cout << "[3] Exit" << endl;
  cout << "Please enter a menu item: ";
  return;
}

void print2dMenu() {
  cout << "Choose an Area to Compute:" << endl;
  cout << "[1] Circle" << endl;
  cout << "[2] Triangle" << endl;
  cout << "[3] Rectangle" << endl;
  cout << "[4] Return to main menu" << endl;
  cout << "Please enter a menu item: ";
  return;
}

void print3dMenu() {
  cout << "Choose a Volume to Compute:" << endl;
  cout << "[1] Sphere" << endl;
  cout << "[2] Cone" << endl;
  cout << "[3] Box" << endl;
  cout << "[4] Return to main menu" << endl;
  cout << "Please enter a menu item: ";
  return;
}

//
// Makes sure the user input is a positive float.
//
float getInput() {
  
  float retVal;
  cin >> retVal;

  if (retVal <= 0) {
    cout << "Please enter a valid postive number." << endl;
    return 0.0;
  }
  
  return retVal;

}

int main() {

  // Scope variables.
  float ans, radius, width, height, length;
  int userSelect;
  int menuState = 1;  // 1 for main menu
                      // 2 for 2d
                      // 3 for 3d

  // 
  // Main program loop.
  //
  while (1) {
    
    userSelect = 0;

    //
    // Main Menu
    ///
    if (menuState == 1) {

      printMainMenu();
      userSelect = getInput();
      if (userSelect == 1) {
        menuState = 2;
      } else if (userSelect == 2) {
        menuState = 3;
      } else if (userSelect == 3) {
        return 0;
      } else {
        cout << "Please enter a valid selection" << endl;
      }
    }

    //
    // 2D Menu
    //
    else if (menuState == 2) {
      
      // Print menu
      print2dMenu();
      userSelect = getInput();
      
      //
      // Circle
      //
      if (userSelect == 1) {
        
        // Get input.
        do {
          cout << "Please enter the radius: ";
          radius = getInput();
        } while (radius <= 0.0);
        
        // Print input.
        ans = AreaOfCircle(radius);
        cout << "The area of the circle is: " << ans << endl;
        cout << "Press enter to return to the menu." << endl;
        cin >> ans;

      } 

      //
      // Triangle
      //
      else if (userSelect == 2) {
        
        // Get input.
        do {
          cout << "Please enter the width: ";
          width = getInput();
        } while (width <= 0.0);

        do {
          cout << "Please enter the height: ";
          height = getInput();
        } while (height <= 0.0);

        // Print input.
        ans = AreaOfTriangle(width, height);
        cout << "The area of the triangle is: " << ans << endl;
        cout << "Press enter to return to the menu." << endl;
        cin >> ans;

      } 

      //
      // Rectangle
      //
      else if (userSelect == 3) { 
        
        // Get input.
        do {
          cout << "Please enter the width: ";
          width = getInput();
        } while (width <= 0.0);

        do {
          cout << "Please enter the height: ";
          height = getInput();
        } while (height <= 0.0);

        // Print input.
        ans = AreaOfRectangle(width, height);
        cout << "The area of the rectangle is: " << ans << endl;
        cout << "Press enter to return to the menu." << endl;
        cin >> ans;

      } 

      //
      // Return to main menu.
      //
      else if (userSelect == 4) {
        menuState = 1;
      }

      menuState = 1;
    } 

    //
    // 3D Menu
    //
    else if (menuState == 3) {
      
      // Print menu
      print3dMenu();
      userSelect = getInput();

      //
      // Sphere
      //
      if (userSelect == 1) {
        
        // Get input.
        do {
          cout << "Please enter the radius: ";
          radius = getInput();
        } while (radius <= 0.0);

        // Print input.
        ans = VolumeOfSphere(radius);
        cout << "The volume of the sphere is: " << ans << endl;
        cout << "Press enter to return to the menu." << endl;
        cin >> ans;

      } 

      //
      // Cone
      //
      else if (userSelect == 2) {
        
        // Get input.
        do {
          cout << "Please enter the radius: ";
          radius = getInput();
        } while (radius <= 0.0);

        do {
          cout << "Please enter the height: ";
          height = getInput();
        } while (height <= 0.0);

        // Print input.
        ans = VolumeOfCone(radius, height);
        cout << "The volume of the cone is: " << ans << endl;
        cout << "Press enter to return to the menu." << endl;
        cin >> ans;

      } 

      //
      // Box
      //
      else if (userSelect == 3) {
        
        // Get input.
        do {
          cout << "Please enter the width: ";
          width = getInput();
        } while (width <= 0.0);

        do {
          cout << "Please enter the height: ";
          height = getInput();
        } while (height <= 0.0);

        do {
          cout << "Please enter the length: ";
          length = getInput();
        } while (length <= 0.0);

        // Print input.
        ans = VolumeOfBox(width, height, length);
        cout << "The volume of the box is: " << ans << endl;
        cout << "Press enter to return to the menu." << endl;
        cin >> ans;

      } 

      //
      // Return to main menu.
      // 
      else if (userSelect == 4) {
        menuState = 1;
      }

      menuState = 1;
    }  
  }
  return 0;
}

