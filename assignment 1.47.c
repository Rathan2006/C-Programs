#include<stdio.h>//program to print pyramid pattern a ab ...
int main()
{
char i,j;
char n;
printf("enter alphabet upto which alphabets should be printed : ");
scanf(" %c",&n);
for(i='A';i<=n;i++)
{
for(j='A';j<=i;j++)
{
printf(" %c",j);
}
printf("\n");
}
return 0;
}
