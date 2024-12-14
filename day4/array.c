#include<stdio.h>
int main()
{
    int numbers[4];
    printf("num1:");
    scanf("%d",&numbers[0]);
    printf("num2:");
    scanf("%d",&numbers[1]);
    printf("num3:");
    scanf("%d",&numbers[2]);
    printf("num4:");
    scanf("%d",&numbers[3]);
    printf("\nnum1=%d",numbers[0]);
    printf("\nnum2=%d",numbers[1]);
    printf("\nnum3=%d",numbers[2]);
    printf("\nnum4=%d",numbers[3]);
    return 0;
}