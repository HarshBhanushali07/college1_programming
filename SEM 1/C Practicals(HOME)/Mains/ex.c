#include<stdio.h>

void main()
{
    int num, count = 1;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    while(count <= num/2)
    {
        if(num % count == 0)
        {
            printf("%d ", count);
        }
        count++;
    }
}

