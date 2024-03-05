#include<stdio.h>
void main()
{
	int l,b,h,sum;
	printf("\t-----Area of Rectangle-----\n");
	printf("\nEnter the Value Of l:");
	scanf("%d",&l);
	printf("\nEnter the Value Of b:");
	scanf("%d",&b);
	printf("\nEnter the Value Of h:");
	scanf("%d",&h);
	sum=2*((l*b)*(b*h)*(h*l));
	printf("Area Of Ractangle :%d",sum);
}
