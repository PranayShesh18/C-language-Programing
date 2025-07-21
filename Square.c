#include <stdio.h>

int main() {
    float side, area;

    // Input side of the square
    printf("Enter the side of the square: ");
    scanf("%f", &side);

    // Calculate area
    area = side * side;

    // Output the area
    printf("Area of the square = %.2f\n", area);

    return 0;
}
