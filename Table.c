#include<stdio.h>

int main()
{
    int num,table;

    printf("Enter the number to create a table \n");
    scanf("%d",&num);

    for(int i=0;i<=10;i++)
    {
        table = i * num;
        printf("Table of %d x %d : %d\n",num,i,table);
    }
    return 0;
}