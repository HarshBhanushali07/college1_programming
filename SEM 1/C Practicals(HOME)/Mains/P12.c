#include<stdio.h>
void main()
 {
    int num1, num2, max;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    max = (num1 > num2) ? num1 : num2;

    printf("The maximum number is: %d\n", max);
}
