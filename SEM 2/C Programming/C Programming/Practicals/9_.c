#include <stdio.h>
#include <stdlib.h>

void main() 
{
    int n, sum = 0,i;
    int *numbers;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    numbers = (int *)malloc(n * sizeof(int));
    printf("Enter %d numbers:\n", n);
    for (i = 0;i<n;i++) 
	{
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    printf("Sum of the numbers: %d\n", sum);
    free(numbers);
}

