#include <stdio.h>

void convertToWords(int num);

void main() 
{
    int amount;
    
    printf("Enter an amount: ");
    scanf("%d", &amount);
    
    convertToWords(amount);
}

void convertToWords(int num) 
{
    char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    
    if (num < 10) 
	{
        printf("%s ", ones[num]);
    } 
	else if (num < 20) 
	{
        printf("%s ", teens[num - 10]);
    }
	 else if (num < 100) 
	{
        printf("%s ", tens[num / 10]);
        convertToWords(num % 10);
    }
	 else if (num < 1000) 
	{
        printf("%s Hundred ", ones[num / 100]);
        convertToWords(num % 100);
    }
	 else if (num < 100000)
	{
        convertToWords(num / 1000);
        printf("Thousand ");
        convertToWords(num % 1000);
    } 
	else if (num < 10000000) 
	{
        convertToWords(num / 100000);
        printf("Lakh ");
        convertToWords(num % 100000);
    } 
	else if (num < 1000000000) 
	{
        convertToWords(num / 10000000);
        printf("Crore ");
        convertToWords(num % 10000000);
    }
}

