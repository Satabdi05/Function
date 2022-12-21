#include<stdio.h>

void sum(float, float);

void main()
{
 float x,y;
 printf("Enter the value of x,y :");
 scanf("%f%f", &x, &y);
 sum(x,y);
}
 void sum(float a, float b)
 {
 //float sum=0;
 //sum=a+b;
 printf("Sum is :%.2f", a+b);
 }
