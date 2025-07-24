#include<stdio.h>

int main()
{
    int marks;

    printf("Enter the student marks\n");
    scanf("%d",&marks);

    marks >= 30 ? printf("Student is pass") : printf("Student is fail");
    return 0;
}