#include <stdio.h>

void main() 
{
    int a = 5, b = 3;
    int result;

    result = a & b;
    printf("Bitwise AND: %d\n", result);

    result = a | b;
    printf("Bitwise OR: %d\n", result);

    result = a ^ b;
    printf("Bitwise XOR: %d\n", result);

    result = ~a;
    printf("Bitwise NOT: %d\n", result);

    result = a << 1;
    printf("Left Shift: %d\n", result);

    result = a >> 1;
    printf("Right Shift: %d\n", result);
}
