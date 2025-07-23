#include<stdio.h>

int main()
{
    int num;

    printf("Enter the number to check number is divisible by 2 or not\n");
    scanf("%d",&num);

    if(num%2 == 0)
    {
        printf("Number is divisible by 2\n");
    }
    else
    {
        printf("Number is not divisible by 2\n");
    }
    return 0;
}