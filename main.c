#include <stdio.h>
#include <stdlib.h>

void redcolor() {
  printf("---------------------------------------------------------------------"
         "---------------\n");
  printf("---------------------------------------------------------------------"
         "---------------\n");
  printf("\t\t\t\t\t\t\t\t WELCOME TO OUR AIRLINE\n");
  printf("---------------------------------------------------------------------"
         "---------------\n");
  printf("---------------------------------------------------------------------"
         "---------------\n");
  printf("/////////////////////////////////////////////////////////////////////"
         "////////////////\n");
  printf("\t\t\t\t\t\t\t\t ReGiStEr To OuR AiRlInE\n");
  printf("/////////////////////////////////////////////////////////////////////"
         "////////////////\n");

  printf("Please enter your name: ");
  char name[50];
  scanf("%s", name);
  printf("Please enter your username: ");
  char username[20];
  scanf("%s", username);

  FILE *fptr;
  fptr = fopen("flights1.txt", "w");
  fprintf(fptr, "Name: %s\n", name);
  fprintf(fptr, "Username: %s\n", username);

  int n;
  printf("Book a ticket:\n ");
  printf("For New York choose 1, for London choose 2, for Dubai choose 3 \n");
  scanf("%d", &n);

  switch (n) {
    case 1:
      fprintf(fptr, "Welcome to our Airline\n Your destination is New York\n");
      fprintf(fptr,
              "Your flight is at 8:00 am, You will arrive at 11:00 pm, The price is: "
              "1500$. Baggage 35 kg. Have a nice day and we hope you will not die:)\n");

      int AmountOfMoney;
      int baggage;
      printf("Enter the amount of money: ");
      scanf("%d", &AmountOfMoney);
      printf("Enter the baggage weight: ");
      scanf("%d", &baggage);

      if (AmountOfMoney < 1500 || baggage < 35) {
        printf("Insufficient funds or excess baggage weight.\n");
        printf("You cannot book this flight.\n");
      } else {
        printf("You can book this flight.\n");
      }
      break;

    case 2:
      fprintf(fptr, "Welcome to our Airline\n Your destination is London\n");
      fprintf(fptr,
              "Your flight is at 14:00 pm, You will arrive at 5:00 am, The price "
              "is: 1850$. Baggage 40. Have a nice day and we hope you will not "
              "die:)\n");

      printf("Enter the amount of money: ");
      scanf("%d", &AmountOfMoney);
      printf("Enter the baggage weight: ");
      scanf("%d", &baggage);

      if (AmountOfMoney < 1850 || baggage < 40) {
        printf("Insufficient funds or excess baggage weight.\n");
        printf("You cannot book this flight.\n");
      } else {
        printf("You can book this flight.\n");
      }
      break;

    case 3:
      fprintf(fptr, "Welcome to our Airline\n Your destination is Dubai\n");
      fprintf(fptr,
              "Your flight is at 10:00 pm, You will arrive at 3:00 am, The price "
              "is 400$. Baggage 25. Have a nice day and we hope you will not die:)\n");

      printf("Enter the amount of money: ");
      scanf("%d", &AmountOfMoney);
      printf("Enter the baggage weight: ");
      scanf("%d", &baggage);

      if (AmountOfMoney < 400 || baggage < 25) {
        printf("Insufficient funds or excess baggage weight.\n");
        printf("You cannot book this flight.\n");
      } else {
        printf("You can book this flight.\n");
      }
      break;

    default:
      printf("You chose a wrong number bro:\n");
      break;
  }

  int choice;
  printf("Do you have any snacks? 1 for yes, 2 for no\n");
  scanf("%d", &choice);

  if (choice == 1) {
    printf("Enjoy your snacks!\n");
  } else {
    printf("Diet, huh?\n");
  }

  fclose(fptr);
  return 0;
}
