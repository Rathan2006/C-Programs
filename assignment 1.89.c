#include<stdio.h>
int main()
{
    int n;
    printf("\n Enter the number of elements of the array:");
    scanf("%d",&n);
    int arr[n],*ptr,arrnew[n];
    ptr=arr;
    printf("\n Enter the elements of the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        arrnew[n-i-1]=*ptr;
        ptr++;
    }
    printf("\n The elements of the new array are:");
    for(int i=0;i<n;i++)
    {
       printf("%d \t",arrnew[i]);
    }
}
