#include<stdio.h>//program to print value of y for different values of n
#include<math.h>
int main(){

int x,n,Y;

    printf("enter x and n:");

    scanf("%d %d",&x,&n);

if(n==1){

    Y=1+x;

    printf("Y=%d",Y);

}

else if(n==2){

    Y=1+(x/n);

    printf("Y=%d",Y);

}

else if(n==3){

    Y=1+pow(x,n);

    printf("Y=%d",Y);

}

else if(n>3 && n<1){

    Y=1+(n*x);

    printf("Y=%d",Y);

}

return 0;

}
