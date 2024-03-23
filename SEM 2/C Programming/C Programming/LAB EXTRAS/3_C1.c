//3_6
//Find reverse of any number using recursion.
#include <stdio.h>
int rev(int n);
void main()
{
    int n,reversed=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    reversed = rev(n);
    
    printf("Reverse of the number: %d", reversed);
}

int rev(int n)
{
    int reversednum=0;
    if (n==0)
	{
        return reversednum;
    }
    reversednum=reversednum*10+(n%10);
    return rev(n/10);
}
