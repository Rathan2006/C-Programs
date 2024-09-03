#include<stdio.h>
#include<math.h>
int main(){
int n,j,sum=0,rem,i;
printf("enter a number:");
scanf("%d",&n);
int m=n;
for(j=0;m>0;j++)
{
m=m/10;
}
for(i=j;n>0;i--)
{
rem=n%10;
sum=sum+rem*pow(10,i-1);
n=n/10;
}
printf("%d",sum);
return 0;
}
