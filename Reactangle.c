#include<stdio.h>

 int main(int argc, char const *argv[])
{
    int l,w;
    int p;

    printf("Enter the length of the reactangle\n");
    printf("Enter the width of the reactangle\n");
    scanf("%d",&l);
    scanf("%d",&w);

    p=2*(l+w);

    printf("Perimeter of the rectangle is: %d",p);
    return 0;
}
