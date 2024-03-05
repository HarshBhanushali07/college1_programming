#include<stdio.h>
void main()
{
	int n,ans;
	printf("Enter The Value Of N:");
	scanf("%d",&n);
	ans=n%2;
	if(ans==0)
	{
		printf("Enterd No. Is Even");
	}
	else
	{
		printf("Enterd No. Is Odd");
	}
}
