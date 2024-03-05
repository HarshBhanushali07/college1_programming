#include<stdio.h>
void main()
{
	int n,i;
	printf("First 50 Even No. Is :");
	for(i=0;i<=50;i++)
	{
		n=n+2;
		if(n%2==0)
		{
			printf("%d\n",n);
		}
	}
}
