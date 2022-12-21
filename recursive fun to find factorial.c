#include<stdio.h>
#include<conio.h>
void main()

{
    int n;
    printf("Enter value for n : ");
    scanf("%d", &n);
    printf("Factorial of %d : %d", n, fact(n));
    getch();
}
int fact(int x)
{
    if (x==1)
        return(x);
    else
        x = x * fact (x-1);
    return(x);
}
