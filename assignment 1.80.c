#include<stdio.h>
void fibonacci(int a);
int main()
{
    int n;
    printf("enter number of terms in fibonacci series:");
    scanf("%d",&n);
    fibonacci(n);
}
void fibonacci(int a)
{
    int num1=0,num2=1,k;
    printf("fibonacci series for %d terms :",a);
    for( int i=1;i<=a;i++)
    {
        printf("%d \t",num1);
        k=num1;
        num1=num2;
        num2+=k;
    }
}
