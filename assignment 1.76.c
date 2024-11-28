#include<stdio.h>
void evenodd(int a);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    evenodd(n);
}
void evenodd(int a)
{
    if(a%2==0)
    {
        printf("entered number is even");
    }
    else if(a%2==1)
    {
        printf("entered number is odd ");
    }
}
