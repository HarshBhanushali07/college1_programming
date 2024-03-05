#include<stdio.h>
void main()
{
	int choice;
	float num1, num2,ans;

  	printf("Enter First number: ");
    scanf("%f",&num1);
	
	printf("Enter Second numbers: ");
    scanf("%f", &num2);
    
	printf("1 For Additon\n");
	printf("2 For Substraction\n");
	printf("3 For Multiplication\n");
	printf("4 For Divison\n");
	printf("Enter Your Choice :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			ans=num1+num2;
			printf("%f+%f=%f",num1,num2,ans);
			break;
		case 2:
			ans=num1-num2;
			printf("%f-%f=%f",num1,num2,ans);
			break;
		case 3:
			ans=num1*num2;
			printf("%f*%f=%f",num1,num2,ans);
			break;
		case 4:
			ans=num1/num2;
			printf("%f/%f=%f",num1,num2,ans);
			break;
	}
}
