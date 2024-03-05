#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter the Value Of N :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("SUM Of 1 to %d Is : %d",n,sum);
}
