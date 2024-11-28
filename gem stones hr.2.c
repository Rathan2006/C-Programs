#include <stdio.h>
#include<string.h>
int main()
{
    int n,arr[26],count=0;
    for(int i=0;i<26;i++)
    {
        arr[i]=0;
    }
    printf("Enter the number of rocks:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
      printf("\n");
      char arr1[100];
      strcpy(arr1," ");
      gets(arr1);
      for(int m=0;m<strlen(arr1);m++)//to remove common elements in string
      {
        for(int n=m+1;n<strlen(arr1);n++)
        {
            if(arr1[m]==arr1[n])
            {
                arr1[n]=" ";
            }
        }
      }
      for(int m=0;m<strlen(arr1);m++)
      {
          if(arr1[m]==" ")
          {
             arr1[m]=arr1[m+1];
             arr1[m+1]=" ";
          }
      }
    for(int j=0;j<strlen(arr1);j++)//to count the occurrence of each element in number of rocks
      {
          int x=arr1[j]-97;
          arr[x]++;
      }
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]==n)
        {
            count++;
        }
    }
      printf(" \n Number of gem stone elements=%d",count);

}
