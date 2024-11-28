#include<stdio.h>//program to print sum all elements in a row of a matrix
int main()
{
  int i,j,n;
  printf("enter the number which should be the order of the matrix");
  scanf("%d",&n);
  int arr[n][n],sum;
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
    sum=0;
    for(j=0;j<n;j++)
    {
     sum+=arr[i][j];
    }
    printf("sum of elements of %d row is %d \n",i,sum);
  }
  return 0;
}



