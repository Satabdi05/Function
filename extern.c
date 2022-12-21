#include<stdio.h>
//int a = 10;
int main()
{
    extern int a;     // extern keyword use access a variable from another file or somewhere else
    printf("%d\n", a);
    fun1();
    fun2();
}
void fun1()
{
    int a = 2;
    //a++;
    printf("a :%d\n", a);
}
void fun2()
{
    printf("Hello fun1 & fun2");
}
int a = 10;
