#include <stdio.h>

int checkNumber(int n);

void main() 
{
    int low, high, i, flag;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    for (i = low + 1; i < high; ++i) 
	{
        flag = checkNumber(i);

        if (flag == 1) 
		{
            printf("%d ", i);
        }
    }
}

int checkNumber(int n) 
{
    int j, flag = 1;
    
    if (n <= 1)
	{
	  return 0; 
	}
   
    for (j=2;j<=n/2;j++)
	{
        if (n%j==0)
		{
            flag=0;
            break;
        }
    }
    return flag;
}

