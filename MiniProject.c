
#include <stdio.h>

using namespace std;

int main() {
  //Declaration area
  int room; // Variable for housing user's current room
  int choice; // Variable for housing user's room choice
  bool reachedBackToRoom, reachedKictchen;

  //Working area
  room = 1; //Starting room
  while (!reacheadBackToRoom) {
    //Show inputs
    switch (room) {
      case 1:
        cout << "\n[1] Go to room 3\n";
        cout << "\n[2] Go to room 8\n";
        cout << "\n[3] Go to room 2\n";
        break;
      case 2:
        cout << "\n[1] Go to room 1\n";
        cout << "\n[2] Go to room 7\n";
        cout << "\n[3] Go to room 3\n";
        cout << "\n[4] Go to room 6\n";
        break;
      case 3:
        cout << "\n[1] Go to room 6\n";
        cout << "\n[2] Go to room 1\n";
        cout << "\n[3] Go to room 2\n";
        break;
      case 4:
        cout << "\n[1] Go to room 5\n";
        cout << "\n[2] Go to room 9\n";
        break;

      case 5:
        cout << "\n[1] Go to room 6\n";
        cout << "\n[2] Go to room 4\n";
        cout << "\n[3] Go to room 8\n";
        break;

      case 6:
        cout << "\n[1] Go to room 3\n";
        cout << "\n[2] Go to room 2\n";
        cout << "\n[3] Go to room 5\n";
        break;

      case 7:
        cout << "\n[2] Go to room 8\n";
        cout << "\n[3] Go to room 2\n";
        break;

      case 8:
        cout << "\n[1] Go to room 5\n";
        cout << "\n[2] Go to room 7\n";
        cout << "\n[3] Go to room 1\n";
        break;

      case 9:
        cout << "\n[1] Go to room 4\n";
        break;

    }

    //Get input
    cout << "\nKey in your room choice: ";
    cin >> choice;

    //Process input
    switch(room) {
      case 1:
        if (choice == 1)
          room = 3;
        else if (choice == 2)
          room = 8;
        else
          cout << "\nDoor locked\n";
        break;

      case 2:
        if (choice == 1)
          room = 1;
        else if (choice == 2)
          cout << "\nDoor locked\n";
        else if (choice == 3)
          room = 6;
        else
          room = 3;
        break;

      case 3:
        if (choice == 1)
          room = 6;
        else if (choice == 2)
          cout << "\nDoor locked\n";
        else
          room = 2;
        break;

      case 4:
        if (choice == 1)
          room = 9;
          if (!reachedKictchen)
            reachedKictchen = true;
            //prompt congrats
        else
          room = 5;
        break;

      case 5:
        if (choice == 1)
          room = 6;
        else if (choice == 2)
          room = 4;
        else
          cout << "\nDoor locked\n";
        break;

      case 6:
        if (choice == 1)
          room = 3;
        else if (choice == 2)
          room = 2;
        else
          room = 5;
        break;

      case 7:
        if (choice == 1)
          cout << "\nDoor locked\n";
        else
          room = 2;
        break;

      case 8:
        if (choice == 1)
          room = 5;
        else if (choice == 2)
          room = 7;
        else
          room = 1;
          if (reachedKReached)
            reachedBackToRoom = true;
        break;

      case 9:
        room = 4;
        break;

    }


    if (reachedKictchen && reachedBackToRoom) {
      //Promtp congrats

    }
  }

}
