#include<stdio.h>
#include<math.h>
int cube(int a)
{
    printf("%d",pow(a,3));
    return 0;
}
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    cube(a);
    return 0;
}