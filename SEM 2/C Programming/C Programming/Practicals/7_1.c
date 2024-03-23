#include <stdio.h>

void main() {
    int num = 10;
    int *ptr;
    ptr = &num;
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", ptr);
}

