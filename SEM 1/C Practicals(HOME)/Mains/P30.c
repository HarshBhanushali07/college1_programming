#include<stdio.h>
void main()
{
	int n,j,k,i;
	printf("Enter the value of N:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
