#include <stdio.h>

void convertToUpper(char str[]);

void main() 
{
    char str[500];

    printf("Enter a string: ");
    scanf("%s", str);
	
	printf("----------------------------------------------------------------\n");
    printf("\nOriginal String: %s\n\n", str);

    convertToUpper(str);

    printf("Uppercase String: %s\n", str);
}

void convertToUpper(char str[]) 
{
    int i;
    for (i=0;str[i]!='\0';) 
	{
        if (str[i] >= 'a' && str[i] <= 'z') 
		{
            str[i] = str[i] - 32;
        }
        i++;
    }
}

