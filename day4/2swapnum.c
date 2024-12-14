#include <stdio.h>
void swap(int *a,int *b) 
{
    int temp=*a;  
    *a=*b;        
    *b=temp;      
}
int main() 
{
    int x,y;
    printf("Enter two numbers:\n");
    printf("x:");
    scanf("%d",&x);
    printf("y:");
    scanf("%d",&y);
    printf("\nBefore swapping:\n");
    printf("x=%d,y=%d\n",x,y);
    swap(&x,&y);
    printf("\nAfter swapping:\n");
    printf("x=%d,y=%d\n",x,y);
return 0;
}