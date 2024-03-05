#include <stdio.h>
void main() 
{
    float weight, height, bmi=0;
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter your height in Feet : ");
    scanf("%f", &height);
    height=height/3.28084;
    bmi=weight/(height*height);
    printf("BMI is %f",bmi);
    if (bmi >= 18.5 && bmi <= 24.9) 
	{
        printf("You are healthy.\n");
    } 
	else 
	{
        printf("You are overweight.\n");
    }
}

