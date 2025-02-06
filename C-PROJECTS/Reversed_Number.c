#include <stdio.h>
int main ()
{
     int num , reverse = 0 ;
     printf ("Enter the number you want to reversed : ");
     scanf ("%i",&num);
     while (num != 0) {
          reverse = reverse * 10 + num % 10;
          num /= 10;
     }
     printf ("Reversed number is : %d",reverse);
     
}