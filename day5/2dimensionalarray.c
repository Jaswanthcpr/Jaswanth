#include<stdio.h>
int main()
{
    int array[2][4]={{1,2,9,6},{4,7,9,4}};
    // printf("2d array=%d",array);
    // int n=8;
    // int max=array[0][0];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
    {
        printf("\n arr[%d][%d]=%d",i,j,array[i][j]);
    }
    
    }
    
    return 0;
}