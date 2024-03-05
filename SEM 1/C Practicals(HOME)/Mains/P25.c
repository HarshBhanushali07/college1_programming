#include<stdio.h>	
void main()
{ 
	int num,count=1,i,sum=0;
	printf("Enter the num : ");
	scanf("%d",&num);
	while(count<num)
	{
		if( num%count==0)
		{
			sum=sum+count;
		}
		count++;
	}
	if(sum==num)
	{
		printf("\n%d is perfect number",num);
	}
	else
	{
		printf("\n%d is Not perfect number",num);
	}
}
