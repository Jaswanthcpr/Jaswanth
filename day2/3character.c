#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check the type of character using nested if statements
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("The character '%c' is an alphabet.\n", ch);
    } else {
        if (ch >= '0' && ch <= '9') {
            printf("The character '%c' is a digit.\n", ch);
        } else {
            printf("The character '%c' is a special character.\n", ch);
        }
    }

    return 0;
}