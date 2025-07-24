#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number between 1-7 to check the day\n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        if (num == 1)
        {
            printf("Dya is monday");
        }
        break;
    case 2:
        if (num == 2)
        {
            printf("Dya is Tuesday");
        }
        break;
    case 3:
        if (num == 3)
        {
            printf("Dya is Wednesday");
        }
        break;
    case 4:
        if (num == 4)
        {
            printf("Dya is Thursday");
        }
        break;
    case 5:
        if (num == 5)
        {
            printf("Dya is Friday");
        }
        break;
    case 6:
        if (num == 6)
        {
            printf("Dya is Saturday");
        }
        break;
    case 7:
        if (num == 7)
        {
            printf("Dya is Sunday");
        }
        break;

    default:
        printf("Your enter the wrong number");
        break;
    }
    return 0;
}