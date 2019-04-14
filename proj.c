
#include <stdio.h>
#include <stdbool.h>

int main() {
  //Declaration area
  int room; // Variable for housing user's current room
  int choice; // Variable for housing user's room choice
  bool reachedBackToRoom;
  bool reachedKictchen;

  //Working area
  room = 1; //Starting room
  while (!reacheadBackToRoom) {
    //Show inputs
    switch (room) {
      case 1:
        printf("\n[1] Go to room 3\n");
        printf("\n[2] Go to room 8\n");
        printf("\n[3] Go to room 2\n");
        break;
      case 2:
        printf("\n[1] Go to room 1\n");
        printf("\n[2] Go to room 7\n");
        printf("\n[3] Go to room 3\n");
        printf("\n[4] Go to room 6\n");
        break;
      case 3:
        printf("\n[1] Go to room 6\n");
        printf("\n[2] Go to room 1\n");
        printf("\n[3] Go to room 2\n");
        break;
      case 4:
        printf("\n[1] Go to room 5\n");
        printf("\n[2] Go to room 9\n");
        break;

      case 5:
        printf("\n[1] Go to room 6\n");
        printf("\n[2] Go to room 4\n");
        printf("\n[3] Go to room 8\n");
        break;

      case 6:
        printf("\n[1] Go to room 3\n");
        printf("\n[2] Go to room 2\n");
        printf("\n[3] Go to room 5\n");
        break;

      case 7:
        printf("\n[2] Go to room 8\n");
        printf("\n[3] Go to room 2\n");
        break;

      case 8:
        printf("\n[1] Go to room 5\n");
        printf("\n[2] Go to room 7\n");
        printf("\n[3] Go to room 1\n");
        break;

      case 9:
        printf("\n[1] Go to room 4\n");
        break;

    }

    //Get input
    printf("\nKey in your room choice: ");
    scanf("%d", &choice);

    //Process input
    switch(room) {
      case 1:
        if (choice == 1)
          room = 3;
        else if (choice == 2)
          room = 8;
        else
          printf("\nDoor locked\n");
        break;

      case 2:
        if (choice == 1)
          room = 1;
        else if (choice == 2)
          printf("\nDoor locked\n");
        else if (choice == 3)
          room = 6;
        else
          room = 3;
        break;

      case 3:
        if (choice == 1)
          room = 6;
        else if (choice == 2)
          printf("\nDoor locked\n");
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
          printf("\nDoor locked\n");
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
          printf("\nDoor locked\n");
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
