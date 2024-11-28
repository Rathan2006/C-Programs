#include<stdio.h>
#include<math.h>
int main(){
int i,N,s;

    printf("enter a number:");

    scanf("%d",&N);

for(i=1;i<=N;i++)

{
s=pow(i,2);

    printf("%d,",s);
}

return 0;

}
