#include<stdio.h>
void main()
{
	int no,nw,mod,i;
	printf("Enter the no. you Want to Reverse :");
	scanf("%d",&no);
	for(i=0;i<=10;i++)
	{
	nw=no%10;
	printf("%d",nw);
	mod=no/10;
	printf("\n%d",mod);
	}
}
