#include <stdio.h>

int main() 
{
    int i,j,n;
    printf("enter the row number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=1;j--)
        {
            if(i>=j)
            printf("%d",i+j);
            else
            printf(" ");
        }
    
    printf("\n");
    }
return 0;
}