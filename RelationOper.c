#include<stdio.h>

int main()
{
    int a=10;
    int b=20;

    printf("Relation oper. are\n");
    if(a==b)
    {
        printf("Both are equal to each other.\n");
    }

    if(a>b)
    {
        printf("A is greater than B.\n");
    }

    if(a>=b)
    {
        printf("A is greater than equal to B.\n");
    }

    if(a<b)
    {
        printf("A is Less than B.\n");
    }

    if(a<=b)
    {
        printf("A is Less than equal to B.\n");
    }

    if(a!=b)
    {
        printf("Both are not equal to each other.\n");
    }
    return 0;
}