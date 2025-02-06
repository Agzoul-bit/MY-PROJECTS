#include <stdio.h>
#include <string.h>
#include <ctype.h>
void to_lowercase (char str[]) {
     for (int i = 0; str[i]; i++) {
          str[i] = tolower (str[i]);
     }
}
void to_uppercase (char str[]) {
     for (int i = 0; str[i]; i++) {
          str[i] = toupper (str[i]);
     }
}
int main()
{
     char door[25];
     char box[25];
     puts("Welcome to my island!");
     puts("There are two doors in front of you. a red door and a blue door");
     printf("Which door do you want to open? (red/blue): ");
     scanf("%s", door);
     to_lowercase (door);
     if (strcmp(door, "blue") == 0)
     {
          puts("Oops! You choose the crocodile door.");
          puts("Game over! ");
     }
     else if (strcmp(door, "red") == 0)
     {
          puts("Great! Now you entered a room.");
          puts("You found three boxes: white, black, green");
          printf("Wich box do you want to open? (white/black/green): ");
          scanf("%s", box);
          to_uppercase (box);
          if (strcmp(box, "WHITE") == 0)
          {
               puts("Oops! You opened a box filled with snakes .");
          }
          else if (strcmp(box, "BLACK") == 0)
          {
               puts("Oops! You opened a box filled with spiders .");
          }
          else if (strcmp(box, "GREEN") == 0)
          {
               puts("Congratulations! You found the treasure! ");
          }
     }
}