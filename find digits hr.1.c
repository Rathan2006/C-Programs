#include<stdio.h>
int main()
{
    int N,j;//number of numbers for which program should be performed
    printf("enter number of numbers for which program should be executed :");
    scanf("%d",&N);
    for(j=N;j>0;j--)
    {
        printf("\n");

    int i,n,rem,count=0,num;
    printf("enter a number N :");
    scanf("%d",&n);
    num=n;
    for( i=0;num>0;i++)
    {
        rem=num%10;
        if(rem!=0)
        {
        if(n%rem==0)
        {
            count=count+1;
        }
        }
        else
        {
            count=count;
        }
        num=num/10;
    }
    printf("number of digits in the number %d that exactly divides the number is %d",n,count);
    }
    return 0;
}

