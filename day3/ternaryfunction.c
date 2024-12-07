#include<stdio.h>
int ternary(int a,int b)
{
    printf("%d",(a>b?a:b));
    return 0;
}
int main()
{
    int a,b,c;
    printf("enter the numbers:");
    scanf("%d%d",&a,&b);
    ternary(a,b);
    return 0;
}
