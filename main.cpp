// Aksel Torgerson
// atorgerson

#include <iostream>
#include <cstring>
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
  cout << "Please enter a menu item:";
  return;
}

void print3dMenu() {
  cout << "Choose a Volume to Compute:" << endl;
  cout << "[1] Sphere" << endl;
  cout << "[2] Cone" << endl;
  cout << "[3] Box" << endl;
  cout << "[4] Return to main menu" << endl;
  cout << "Please enter a menu item:";
  return;
}

int main() {

  char userSelect[1];
  int menuState = 1;  // 1 for main menu
                      // 2 for 2d
                      // 3 for 3d

  // 
  // Main program loop.
  //
  while (1) {
    if (menuState == 1) {
      printMainMenu();
      cin >> userSelect;
      if (strcmp(userSelect, "1") == 0) {
        menuState = 2;
      } else if (strcmp(userSelect, "2") == 0) {
        menuState = 3;
      } else if (strcmp(userSelect, "3") == 0) {
        return 0;
      }
    } else if (menuState == 2) {
      print2dMenu();
      cin >> userSelect;
      if (strcmp(userSelect, "4") == 0) {
        menuState = 1;
      }
    } else if (menuState == 3) {
      print3dMenu();
      cin >> userSelect;
      if (strcmp(userSelect, "4") == 0) {
        menuState = 1;
      }
    } else {
      menuState = 1;
    }
  }
  return 0;
}

