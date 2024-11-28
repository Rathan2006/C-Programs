#include<stdio.h>
void palindrome(int a);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    palindrome(n);
}
void palindrome(int a)
{
    int rem,num=0,k=a;
    for(;k>0;)
    {
        rem=k%10;
        num=num*10+rem;
        k=k/10;
    }
    if(num==a)
    {
        printf("entered number is a palindrome");
    }
    else
    {
        printf("entered number is not a palindrome");
    }
}
