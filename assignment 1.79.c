#include<stdio.h>
void numic(int a,int b);
int main()
{
    int n1,n2;
    printf("enter two numbers a and b");
    scanf("%d%d",&n1,&n2);
    numic(n1,n2);
}
void numic(int a,int b)
{
    int c;
    printf("X and Y before interchanging are %d and %d",a,b);
    c=a;
    a=b;
    b=c;
    printf(" \n X and Y after interchanging are %d and %d",a,b);
}
