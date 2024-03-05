#include<stdio.h>
void main()
{
	int ans,n1,n2,n=0;
	while(n==0)
	{
	printf("Enter num1 :");
	scanf("%d",&n1);
	printf("Enter num2 :");
	scanf("%d",&n2);       
	ans=n1&n2;
	printf("Modulo Is %d",ans);
	printf("\n\n\n");
	}
}
  