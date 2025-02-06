#include <stdio.h>
#include <math.h>
int main()
{
     int Limit;
     printf("Enter a number: ");
     scanf("%d", &Limit);
     for (int num = 2; num <= Limit; num++)
     {
          int Is_prime = 1;
          for (int i = 2; i <= sqrt (num); i++)
          {
               if (num % i == 0)
               {
                    Is_prime = 0;
                    break;
               }
          }
          if (Is_prime)
          {
               printf ("%d, ",num);
          }
     }
}