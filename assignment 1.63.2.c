#include<stdio.h>
int main()
{
  int i,j,n;
  printf("enter the number which should be the order of the matrix");
  scanf("%d",&n);
  int arr[n][n],temp[n][n];
  printf("enter the elements of the matrix");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  printf("3*3 matrix is: ");
   for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d \t",arr[i][j]);
    }
    printf("\n");
  }
   for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(arr[i][j]>arr[i][j+1])
      {
        temp[i][j]=arr[i][j];
        arr[i][j]=arr[i][j+1];
        arr[i][j+1]=temp[i][j];
      }
    }
  }

  printf("maximum value in the given array elements is : %d \n",arr[n][n]);
  printf("minimum value in the given array elements is : %d",arr[1][1]);
  return 0;
}

