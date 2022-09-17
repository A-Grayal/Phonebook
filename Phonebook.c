#include <stdio.h>
#include <string.h>

void printMenu();

//variables


int main(void) 
{
    //Menu Functions
    int choice1;
    int choice2;
    int choice3;

    //Menu Options

    do {
        printMenu();
        scanf("%d", &choice3);
      switch (choice3)
        {
          case 1:
            //Case 1 Code
            printf("------------------------------------------------\n");
            printf("View Contacts\n");
            printf("------------------------------------------------\n");
          break;

          case 2:
            //Case 2 Code
            printf("------------------------------------------------\n");
            printf("Add Contacts\n");
            printf("------------------------------------------------\n");
          break;
        
          case 3:
            //Case 3 Code
            printf("------------------------------------------------\n");
            printf("Edit Contacts\n");
            printf("------------------------------------------------\n");
          break;

          case 4:
            //Case 4 Code
            printf("------------------------------------------------\n");
            printf("Exiting Program\n");
            printf("------------------------------------------------\n");
          break;
        }
    } while (choice3 != 4);
}

void printMenu()
  {
    printf("Option 1 - View Contacts\n");
    printf("Option 2 - Add Contacts\n");
    printf("Option 3 - Edit Contacts\n");
    printf("Option 4 - Exit Program\n");
    printf("Please make your choice\n");
  }

