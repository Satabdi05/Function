#include<stdio.h>
#include<conio.h>
void sum();  // function declaration
//float sum();
void main()
{
    sum(5,7);//function calling
}
void sum()
{
    int a,b,sum=0;
    printf("enter the value of a & b :");
    scanf("%d%d", &a,&b);
    sum = a+b;
    printf("sum is =%d", sum);
}
/*float sum()
{

    float a, b, sum=0;
    printf("enter the value of a & b :");
    scanf("%f%f", &a,&b);
    sum = a+b;
    printf("sum is =%f", sum);

}*/
