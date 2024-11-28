#include<stdio.h>
int main(){
int i,N;

    printf("enter a number:");

    scanf("%d",&N);

for(i=1;i<=N;i++)

{
if(i%2==0){

continue;

}

    printf("%d,",i);
}

return 0;

}
