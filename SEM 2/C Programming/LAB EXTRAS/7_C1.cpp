#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], *ptr1, *ptr2, temp;

    printf("Enter elements for the first array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements for the second array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    ptr1 = arr1;
    ptr2 = arr2;

    for (int i = 0; i < size; i++) {
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2++;
    }

    printf("\nArrays after swapping:\n");
    printf("First Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSecond Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}

