//7_4
//Copy one array to another using pointers.
#include <stdio.h>

void main() 
{
    int size,i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    printf("Enter %d elements into the array:\n", size);
    for (i = 0; i<size;i++)
	{
        scanf("%d", ptr1 + i);
    }

    for (i = 0; i < size; i++) 
	{
        *(ptr2 + i) = *(ptr1 + i);
    }

    printf("\nElements copied from arr1 to arr2:\n");
    for (i = 0; i<size;i++)
	{
        printf("%d ", *(ptr2 + i));
    }
}

