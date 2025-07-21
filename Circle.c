#include<stdio.h>

int main()
{
    float pi=3.14;
    float r,area;

    printf("Enter the radius of circle");
    scanf("%f",&r);

    area=pi*r;

    printf("Area of the circle is :%0.2f",area);
    return 0;
}