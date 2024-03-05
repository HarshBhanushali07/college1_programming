#include<stdio.h>
void main()
{
	int n,sum,n1,count;
	printf("enter the value of n :");
	scanf("%d",&n);
	printf("Table of %d is : ",n);
	for(count=1;count<=10;count++)
	{
		printf("\n\t\t %d*%d=%d ",n,count,n*count);
	}
}
