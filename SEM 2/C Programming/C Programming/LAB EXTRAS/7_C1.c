#include <stdio.h>

void main() 
{
    int size,i;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], *ptr1, *ptr2, temp;

    printf("Enter elements for the first array:\n");
    for (i = 0; i < size; i++) 
	{
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements for the second array:\n");
    for ( i = 0; i < size; i++)
	{
        scanf("%d", &arr2[i]);
    }

    ptr1 = arr1;
    ptr2 = arr2;

    for ( i = 0; i < size; i++) 
	{
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2++;
    }

    printf("\nArrays after swapping:\n");
    printf("First Array: ");
    for ( i = 0; i < size; i++) 
	{
        printf("%d ", arr1[i]);
    }
    printf("\nSecond Array: ");
    for ( i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }
}

