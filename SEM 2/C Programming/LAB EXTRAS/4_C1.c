#include<stdio.h>

struct Distance
{
    int feet;
    int inches;
};
void main()
{
    struct Distance d1, d2, sum;

    printf("Enter first distance in feet and inches:\n");
    scanf("%d %d", &d1.feet, &d1.inches);

    printf("Enter second distance in feet and inches:\n");
    scanf("%d %d", &d2.feet, &d2.inches);
    
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    if (sum.inches >= 12) 
	{
        sum.feet += sum.inches/12;
        sum.inches = sum.inches%12;
    }
    printf("Sum of distances: %d feet %d inches\n", sum.feet, sum.inches);
}

