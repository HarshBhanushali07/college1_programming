#include <stdio.h>
#include <stdlib.h>

void main() 
{
    int *intVar = (int*)malloc(sizeof(int));
    char *charVar = (char*)calloc(1,sizeof(char));
    float *floatVar = (float*)malloc(sizeof(float));

    free(intVar);
    free(charVar);
    free(floatVar);
}

