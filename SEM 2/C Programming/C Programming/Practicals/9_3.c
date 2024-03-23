#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    int *numbers;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    numbers = (int *)calloc(n, sizeof(int));

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("Sum of the numbers: %d\n", sum);

    free(numbers);
    return 0;
}

