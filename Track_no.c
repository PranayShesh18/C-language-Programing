#include<stdio.h>

int main()
{
    int num;

    while (1)
    {
        printf("Enter the number \n");
        scanf("%d",&num);

        printf("You enter the this number : %d\n",num);

        if(num % 2 !=0)
        {
            printf("You enter the odd number :%d\n",num);
            printf("Thankyou");
            break;
        }
    }
    
    return 0;
}