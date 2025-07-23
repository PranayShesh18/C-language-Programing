#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    int sum, div, mul, minu, mod ;

    printf("Enter the first number");
    scanf("%d",&a);

    printf("Enter the second number");
    scanf("%d",&b);

    sum=a+b;
    printf("Sum the numbers is:%d\n",sum);

    minu=a-b;
    printf("Sum the numbers is:%d\n",minu);

    div=a/b;
    printf("Sum the numbers is:%d\n",div);

    mul=a*b;
    printf("Sum the numbers is:%d\n",mul);

    mod=a%b;
    printf("Sum the numbers is:%d",mod);

    return 0;
}