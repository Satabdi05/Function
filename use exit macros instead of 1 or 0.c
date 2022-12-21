#include <stdio.h>
#include <stdlib.h>

// The exit () function is used to break out of a loop.
int main ()
{
int num1, num2;
printf (" Enter the num1: ");
scanf ("%d", &num1);

printf (" \n Enter the num2: ");
scanf ("%d", &num2);

if (num2 == 0)
{
printf (" \n Dividend cannot be zero. ");


exit(EXIT_FAILURE);
//exit(1);
}

float num3 = (float)num1 / (float)num2;
printf (" %d / %d : %f", num1, num2, num3);


exit(EXIT_SUCCESS);    // use exit (0) instead of exit (exit_success)
//exit(0);
}
