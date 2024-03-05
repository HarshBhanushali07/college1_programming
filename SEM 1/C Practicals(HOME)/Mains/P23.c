#include<stdio.h>
void main()
{
	int num,mod,sum=0;
	printf("Enter The Number :");
	scanf("%d",&num);
	while(num>0)
	{
		mod=num%10;
		sum=sum+mod;
		num=num/10;
	}
	printf("Sum is=%d ",sum);
}
