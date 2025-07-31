#include <stdio.h>

int main()
{
    int num, table, i;

    printf("Enter the number for Reverse table\n");
    scanf("%d", &num);
    for (i = 10; i >= 1; i--)
    {
        table = i * num;
        printf(" Reverse Table is : %d \n", table);
    }

    return 0;
}
