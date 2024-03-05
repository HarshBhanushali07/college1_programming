#include <stdio.h>
void main() 
{
    float radius,area,PI=3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI*(radius*radius);

    printf("The area of the circle is: %f\n", area);
}
