#include<stdio.h>

void fibbo(int len);
void main()
{
	int len;
	printf("Enter length of fibbonaci series:");
	scanf("%d",&len);
	fibbo( len);
}
void fibbo(int len)
{
	long int a=0,b=1,c,i;
	printf("%d,",a);
	printf("%d,",b);
	for(i=2;i<len;i++)
	{
		c=a+b;				
		a=c+b;
		b=a+c;
		printf("%d,",c);
		printf("%d,",a);
		printf("%d,",b);
	}
}
