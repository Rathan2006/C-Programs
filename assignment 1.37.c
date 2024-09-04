#include<stdio.h>
int main(){
int i,N;

    printf("enter a number:");

    scanf("%d",&N);

for(i=2;i<=N;i++)

{
if(i%2==1){

continue;

}

    printf("%d,",i);
}

return 0;

}
