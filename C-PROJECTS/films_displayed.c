#include <stdio.h>
int main()
{
    char movie[] = "1)- One piece\n2)- Naruto\n3)- Death note\n";
    char moviePlus18 [] = "4)- Mr.Robot\n5)- Game of Thronos";
    int age ;
    printf ("Enter your age : ");
    scanf ("%d", &age);
    printf ("%s",movie);
    if ( age > 18 ) {
     puts (moviePlus18);
    }
    return 0;
}