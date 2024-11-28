#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int N,M;
        printf("Enter the number of jars:");
        scanf("%d",&N);
        printf("\n Enter the number of operations to be performed:");
        scanf("%d",&M);
        int arr[N];
        for(int i=0;i<N;i++)
        {
            arr[i]=0;
        }
        int a,b,k;
        printf("\n a is the index of jar from which jars should be filled");
        printf("\n b is the index of jar upto which jars should be filled");
        printf("\n k is the number of marbles which should be filled in each jar");
        for(int i=0;i<M;i++)
        {
            printf("\n Enter a:");
            scanf("%d",&a);
            printf("\n Enter b:");
            scanf("%d",&b);
            printf("\n Enter k:");
            scanf("%d",&k);
            for(int j=a;j<=b;j++)
            {
                arr[j]=arr[j]+k;
            }
        }
        int avg=0,sum=0;
        for(int i=0;i<N;i++)
        {
            sum=sum+arr[i];
        }
        avg=sum/N;
        printf("The average number of candies across N jars after M operations is %d",avg);
        return 0;
}
