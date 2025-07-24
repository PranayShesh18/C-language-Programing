#include<stdio.h>

int main()
{
    char ch;

    printf("Enter the charter\n");
    scanf("%c",&ch);

    if(ch >= '0' && ch <= '9')
    {
        printf("You enter a digit ");
    }
    else
    {
        printf("You enter is a charter");
    }
    return 0;
}