#include<stdio.h>//program to print maximum and second maximum from entered n numbers
int main(){
int n,i;

    printf("enter a number:");

    scanf("%d",&n);

int max2=0,max1=0,b;

for(i=1;i<=n;i++)

{

    printf("enter the %d out of %d number:",i,n);

    scanf("%d",&b);

if(b>=max1)

{

    max2=max1;

    max1=b;

}

else if(b<max1)

{

if(b>=max2)
{

    max2=b;

}

}

}

    printf("maximum number is %d\n",max1);

    printf("second maximum number is %d",max2);

return 0;

}
