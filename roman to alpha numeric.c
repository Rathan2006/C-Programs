#include<stdio.h>
int main()
{
  int n,i;
  printf("enter number of digits of roman number :");
  scanf("%d",&n);
  char ch1[n];
  int arr[n];
  for(i=0;i<n;i++)
  {
      ch1[n]=0;
  }
  printf("enter the roman numeral value :");
  for(i=0;i<n;i++)
  {
    scanf(" %c",&ch1[i]);
  }
  printf("entered roman number is: \n");
  for(i=0;i<n;i++)
  {
    printf(" %c",ch1[i]);
  }
  char I,V,X,L,C,D,M;
  int sum=0;
  for(i=0;i<n;i++)
  {
      if(ch1[i]=='I')
        {
            arr[i]=1;
        }
      else if(ch1[i]=='V')
      {
          arr[i]=5;
      }
      else if(ch1[i]=='X')
      {
           arr[i]=10;
      }
      else if(ch1[i]=='L')
      {
          arr[i]=50;
      }
      else if(ch1[i]=='C')
      {
          arr[i]=100;
      }
      else if(ch1[i]=='D')
      {
          arr[i]=500;
      }
      else if(ch1[i]=='M')
      {
           arr[i]=1000;
      }
  }
   for(i=0;i<n;i++)
   {
       if(i<n-1)
       {
       if(arr[i]<arr[i+1])
       {
         sum=sum-(arr[i]);
       }
       else
       {
           sum=sum+arr[i];
       }

       }
       else if(i==n-1)
       {
           sum=sum+arr[i];
       }
   }

  printf(" \n %d",sum);



  return 0;
}
