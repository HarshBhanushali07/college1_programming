#include<stdio.h>
void main()
{
	int base,power,sum,i;
	printf("Enter the Base :");
	scanf("%d",&base);
	printf("\nEnter the Power :");
	scanf("%d",&power);
	for(i=0,sum=base;i<power;i++)
	{
		sum=sum*base;
	}
	printf(" %d Power of %d is %d",power,base,sum);
}
