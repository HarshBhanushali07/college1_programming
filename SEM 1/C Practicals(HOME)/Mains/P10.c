#include<stdio.h>
void main()
{
	int a,b,quo,rem;
	printf("Enter the a :");
	scanf("%d",&a);
	printf("\nEnter the b :");
	scanf("%d",&b);
	quo=a/b;
	printf("Quotient Of %d and %d is %d",a,b,quo);
	rem=a%b;
	printf("\nReminder Of %d and %d is %d",a,b,rem);
}
