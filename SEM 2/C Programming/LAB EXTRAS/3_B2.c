#include <stdio.h>
void swap(int arr1[], int arr2[], int n);
void print(int arr[], int n);
void main()
{
    int n,i ;
    printf("Enter the n of the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter elements of array 1: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of array 2: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("\nBefore swapping:\n");
    printf("Array 1: ");
    printArray(arr1, n);
    printf("Array 2: ");
    printArray(arr2, n);

    swapArrays(arr1, arr2, n);

    printf("\nAfter swapping:\n");
    printf("Array 1: ");
    printArray(arr1, n);
    printf("Array 2: ");
    printArray(arr2, n);
}

	void swap(int arr1[], int arr2[], int n)
	{
	 	int i;
	    for (i = 0; i < n; i++)
		{
	        int temp = arr1[i];
	        arr1[i] = arr2[i];
	        arr2[i] = temp;
	    }
	}
	void print(int arr[], int n)
	{
	 	int i;
	    for (i=0;i<n;i++) 
		{
	        printf("%d ",arr[i]);
	    }
	    printf("\n");
	}
