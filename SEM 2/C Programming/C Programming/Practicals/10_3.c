#include <stdio.h>

#define PRINT(x) printf("The number is: %d\n", x)

int main() {
    int number;
    printf("Enter number :");
    scanf("%d",&number);
    PRINT(number);

    return 0;
}

