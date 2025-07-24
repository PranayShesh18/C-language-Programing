#include <stdio.h>

int main()
{
    int mark;

    printf("Enter the marks\n");
    scanf("%d", &mark);

    if (mark < 30)
    {
        printf("Student got 'C' grade");
    }
    else if (mark >= 30 && mark < 70)
    {
        printf("Student got 'B' grade");
    }
    else if (mark >= 70 && mark <= 90)
    {
        printf("Student got 'A' Grade");
    }
    else if (mark > 90 && mark <= 100)
    {
        printf("Student got 'A+' Grade");
    }
    else
    {
        printf("Invalid mark entered");
    }

    return 0;
}
