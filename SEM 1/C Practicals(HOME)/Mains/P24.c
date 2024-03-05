#include<stdio.h>
void main()
{
	int num,count=1;
	printf("Enter The num :");
	scanf("%d",&num);
	printf("Factors  of %d is :",num);
	while(count<=num)
	{
		if(num%count==0)
		{
			printf("%d\t",count);
		}
		count++;
	} 	
	
}
