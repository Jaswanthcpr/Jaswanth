#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num>=-99&&num<=-9&&num>=9&&num<=99)
    {
        printf("%d is a digit",num);
    }
    else
    {
        printf("%d is not digit",num);
    }
    return 0;
}