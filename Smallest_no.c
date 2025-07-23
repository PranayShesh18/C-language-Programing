#include<stdio.h>

int main()
{
    int num1 , num2;

    printf("Enter the first Number\n");
    scanf("%d",&num1);

    printf("Enter the Second Number\n");
    scanf("%d",&num2);

    if(num1 > num2)
    {
        printf("Number 2 is Smaller than NUmber 2\n");
    }
    else if (num1 < num2)
    {
        printf("Number 1 is Smaller than NUmber 2\n");   
    }
    
    return 0;
}