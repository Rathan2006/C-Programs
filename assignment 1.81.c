#include<stdio.h>
int prime(int a);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int result=prime(n);
    printf("%d",result);
}
int prime(int a)
{
    int i,count=0;
    for(i=2;i<a;i++)
    {
       if(a%i==0)
       {
           count++;
       }
    }
    if(count==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
