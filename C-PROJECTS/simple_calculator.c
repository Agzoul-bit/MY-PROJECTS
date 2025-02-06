#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#define Sleep(x) sleep((x) / 1000)
#endif
int main()
{
     while (true)
     {
          #ifdef _WIN32
               system("cls");
          #else
               system("clear");
          #endif
          float Addition = 0, Subtraction = 0, Multiplication = 0, Division = 0;
          float first_number, second_number;
          char choice;
          printf("\n********    Hello in our simple calculator !    ********\n");
          printf("\nA. Addition\n");
          printf("B. Subtraction\n");
          printf("C. Multiplication\n");
          printf("D. Division\n");
          printf("E. Exit\n");
          printf("\nEnter your choice: ");
          scanf (" %c",&choice);
          if (!isalpha (choice))
          {
               printf("\nInvalid input! Please Enter your choice as a character.");
               Sleep (3000);
               continue;
          }
          else
          {
               choice = toupper(choice);
               if (choice != 'A' && choice != 'B' && choice != 'C' && choice != 'D' && choice != 'E')
               {
                    printf("\nInvalid input! Please enter a valid option (A, B, C, D, E).");
                    Sleep (3000);
                    continue;
               }
               switch (choice)
               {
               case 'A':
                    printf("\nAddition\n");
                    printf("\nEnter first number: ");
                    scanf("%f", &first_number);
                    printf("\nEnter second number: ");
                    scanf("%f", &second_number);
                    Addition = first_number + second_number;
                    printf("\n%.2f + %.2f = %.2f .", first_number, second_number, Addition);
                    Sleep(7000);
                    break;
               case 'B':
                    printf("\nSubtraction\n");
                    printf("\nEnter first number: ");
                    scanf("%f", &first_number);
                    printf("\nEnter second number: ");
                    scanf("%f", &second_number);
                    Subtraction = first_number - second_number;
                    printf("%.2f - %.2f = %.2f .", first_number, second_number, Subtraction);
                    Sleep(7000);
                    break;
               case 'C':
                    printf("\nMultiplication\n");
                    printf("\nEnter first number: ");
                    scanf("%f", &first_number);
                    printf("\nEnter second number: ");
                    scanf("%f", &second_number);
                    Multiplication = first_number * second_number;
                    printf("%.2f x %.2f = %.2f .", first_number, second_number, Multiplication);
                    Sleep(7000);
                    break;
               case 'D':
                    printf("\nDivision\n");
                    printf("\nEnter first number: ");
                    scanf("%f", &first_number);
                    printf("\nEnter second number: ");
                    scanf("%f", &second_number);
                    if (second_number != 0)
                    {
                         Division = first_number / second_number;
                         printf("%.2f / %.2f = %.2f .", first_number, second_number, Division);
                         Sleep(7000);
                         break;
                    }
                    else
                    {
                         printf("\nError! Division by zero isn't allowed.");
                         Sleep(7000);
                         break;
                    }
               case 'E':
                    printf("\nThanks for using! see you later.\n");
                    exit(0);
               }
          }
     }
}