#include <stdio.h>
void main()
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d",&num2);

    if (num1 > num2)
	{
        printf("%d is the maximum number\n", num1);
    } 
	else 
	{
        printf("%d is the maximum number\n", num2);
    }
}
