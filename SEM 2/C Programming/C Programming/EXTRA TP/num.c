#include <stdio.h>
void scannum(int*numbers,int size);
void main()
{
    int size,i;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int numbers[size];
    scannum(numbers,size);
    printf("Numbers entered by You:\n");
    for (i=0;i<size;i++)
    {
        printf("%d\n",numbers[i]);
    }
}
void scannum(int*numbers,int size)
{
    int i;
    printf("Enter %d numbers:\n",size);
    for (i=0; i<size;i++)
    {
        scanf("%d",&numbers[i]);
    }
}


