#include<stdio.h>

int main()
{
    int a=10,b=20;
    int A=10,B=20;

    printf("Logical Oper. are\n");
    if(a==A && b==B)
    {
        printf("Hello Change the value\n");
    }

    if(a==A || b==B)
    {
        printf("Please Change the value\n");
    }

    return 0;
}