//8_5
//Sort array using pointers.
#include <stdio.h>

void main() 
{
    int n, i, j, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", arr + i);
    }

    for (i=0;i<n-1;i++) 
	{
        for (j=i+1; j<n;j++)
		{
            if (*(arr + i)>*(arr + j)) 
			{
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }

    printf("\nArray elements after sorting:\n");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", *(arr + i));
    }
}

