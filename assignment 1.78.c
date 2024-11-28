#include<stdio.h>
#include<math.h>
void armstrong(int a);
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    armstrong(n);
}
void armstrong(int a)
{
   int num=a,m=a,j,rem,sum=0;
   for(j=0;m>0;j++)
    {
      m=m/10;
    }

   while(a>0)
    {
      rem=a%10;
      sum=sum+pow(rem,j);
      a=a/10;
    }
  if(num==sum)
    {
      printf(" entered number is an Armstrong number");
    }
  else
    {
      printf("entered number is not an Armstrong number");
    }
}
