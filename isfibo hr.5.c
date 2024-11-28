#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
    int t,j,k=0;
    printf("Enter number of test cases:");
    scanf("%d",&t);
    int arr[t],t2=1,t3=1,fib1=0,fib2=1,fib;
    printf("Enter the values of test cases:");
    for(int i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<t;i++)
    {
        k=0;
        for(int j=0;arr[i]>=fib1;j++)
        {
            if(arr[i]==fib1)
            {
                printf("isfibo \n");
                k=-1;
            }
            fib=fib1;
            fib1=fib2;
            fib2=fib2+fib;

        }
        if(k!=-1)
        {
            printf("isnotfibo \n");
        }
    }
}
