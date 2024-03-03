#include <stdio.h>

void main() {
    int num = 10;
    float dec = 3.14;
    double bigNum = 1234567890.1234567890;
    char letter = 'A';

    int *intPtr = &num;
    float *floatPtr = &dec;
    double *doublePtr = &bigNum;
    char *charPtr = &letter;

    printf("Integer: %d, Float: %.2f, Double: %.2lf, Char: %c\n", num, dec, bigNum, letter);
    printf("Integer Pointer: %d, Float Pointer: %d, Double Pointer: %d, Char Pointer: %d\n", intPtr, floatPtr, doublePtr, charPtr);
}

