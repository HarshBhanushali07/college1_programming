#include <stdio.h>
void main() 
{
    char operator;
    float num1, num2;
  	printf("Enter First numbers: ");
    scanf("%c", &operator);

    printf("Enter First numbers: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
            break;
        case '*':
    scanf("%f", &num1);
    
    printf("Enter an operator (+, -, *, /): ");
            printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
            break;
        default:
            printf("Invalid operator");
    }
}

