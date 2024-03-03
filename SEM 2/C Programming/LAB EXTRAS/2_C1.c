#include <stdio.h>

void convertToWords(int num);

int main() {
    int amount;
    
    printf("Enter an amount: ");
    scanf("%d", &amount);
    
    convertToWords(amount);
    
    return 0;
}

void convertToWords(int num) {
    char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    
    if (num < 10) {
        printf("%s ", ones[num]);
    } else if (num < 20) {
        printf("%s ", teens[num - 10]);
    } else if (num < 100) {
        printf("%s ", tens[num / 10]);
        convertToWords(num % 10);
    } else if (num < 1000) {
        convertToWords(num / 100);
        printf("Hundred ");
        convertToWords(num % 100);
    }
}

