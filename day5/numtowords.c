#include <stdio.h>

int main() {
    int num;
    char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char *tens[] = {"ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    printf("Enter a number (0-999): ");
    scanf("%d", &num);

    if (num < 0 || num > 999) {
        printf("Number out of range.");
        return 0;
    }
     else{
    if (num == 0) {
        printf("Zero");
        return 0;
    }

    else if (num / 100 > 0) {
        printf("%s Hundred ", ones[num / 100]);
        num %= 100;
    }

    else if (num >= 10 && num < 20)
    {
        printf("%s", teens[num - 10]);
    } else {
        if (num / 10 > 1) {
            printf("%s ", tens[num / 10]);
            num %= 10;
        }
        if (num > 0) {
            printf("%s", ones[num]);
        }
    
    }
     
    }

      return 0;
}
     