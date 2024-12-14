#include <stdio.h>
int calculateSum(int arr[],int size) 
{
    int sum=0;
    for(int i=0;i<size;i++) 
    {
        sum+=arr[i];
    }
    return sum;
}
int main() 
{
    int numArrays,size;
    printf("Enter the number of arrays:");
    scanf("%d",&numArrays);
    for(int i=0;i<numArrays;i++) 
    {
        printf("\nEnter the size of array %d:",i+1);
        scanf("%d",&size);
        int arr[size];
        printf("Enter %d elements for array %d:",size,i+1);
        for(int j=0;j<size;j++) 
        {
            scanf("%d",&arr[j]);
        }
        int sum=calculateSum(arr,size);
        printf("The sum of elements in array %d is:%d\n",i+1,sum);
    }
    return 0;
}