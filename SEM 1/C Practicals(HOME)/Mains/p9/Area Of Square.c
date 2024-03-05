#include <stdio.h>
void main()
{
    float side, area;
    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);
    area = side * side;
    printf("The area of the square is: %f\n", area);
}
