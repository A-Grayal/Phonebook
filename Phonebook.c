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
            //Case 1 code
          break;

          case 2:
            //Case 2 code
          break;

          case 3:
            printf("------------------------------------------------\n");
            printf("Exiting Program\n");
            printf("------------------------------------------------\n");
          break;
        }
    } while (choice3 != 3);
}

void printMenu()
  {
    printf("Option 1 - \n");
    printf("Option 2 - \n");
    printf("Option 3 - \n");
    printf("Please make your choice\n");
  }

