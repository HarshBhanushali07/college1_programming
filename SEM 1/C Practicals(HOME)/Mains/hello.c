#include<stdio.h>
void main()
{
	int n,i,j,sum=0,num=0;
	printf("Enter the Rows of pattern you Want :");
	scanf("%d",&n);
	for(i=n;i>=n;i--)
	{
		num=num+2;
		for(j=10;j>=i;--j)
		{
			if(num%2==0)
			{
				printf("0");
			} 
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}