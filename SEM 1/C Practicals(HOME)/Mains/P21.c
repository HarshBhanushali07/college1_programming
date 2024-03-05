#include<stdio.h>
void main()
{
	int num,count=0,num1;
	printf("Enter The Number you want to Know num of Digits: ");
	scanf("%d",&num);
	num1=num;
	while(num>0)
	{
		num=num/10;
		count=count+1;
	}
	printf("%d number has %d digits",num1,count);
}
