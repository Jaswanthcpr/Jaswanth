#include <stdio.h>

int main() {
    int a, b, c;

    // Input the three sides of the triangle
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if the triangle is a right-angled triangle using Pythagoras theorem
    if ((a * a == b * b + c * c) || 
        (b * b == a * a + c * c) || 
        (c * c == a * a + b * b)) {
        printf("The given sides form a right-angled triangle.\n");
    } else {
        printf("The given sides do not form a right-angled triangle.\n");
    }

return 0;
}