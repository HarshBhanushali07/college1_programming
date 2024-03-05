#include<stdio.h>
void main()
{
	int n,j,k,i,l,num;
	printf("Enter The N :");
	scanf("%d",&num);
	for(i=num;i>=1;i--)//outer loop is for the row 
	{
		for(j=9;j>=10-i;j--)///Inner loop  is for the columns 
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
