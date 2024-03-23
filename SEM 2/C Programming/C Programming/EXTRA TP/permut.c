#include <stdio.h>

int main() {
    int arr[3]; // Assuming 3 elements for permutation
    int i, j, temp;

    // Input values from the user
    printf("Enter 3 numbers for permutation: ");
    for (i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    // Generating permutations
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            // Swap elements
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            // Display permutation
            printf("%d %d %d\n", arr[0], arr[1], arr[2]);
        }
    }

    return 0;
}

