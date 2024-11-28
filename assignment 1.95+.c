#include<stdio.h>
#include<string.h>
struct Emoloyee
{
    char ename[100];
    int enumber,epay;
};
int main()
{
    int n;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    struct Emoloyee e[n];
    for(int i=0;i<n;i++)
    {
        printf("\n Enter the employee name:");
        scanf("%s",&e[i].ename);
        printf("\n Enter the employee number:");
        scanf("%d",&e[i].enumber);
        printf("\n Enter the employee basic pay:");
        scanf("%d",&e[i].epay);

    }
    printf("\n Employee information:");
    for(int i=0;i<n;i++)
    {
        printf(" \n %s \t %d \t %d \t",e[i].ename,e[i].enumber,e[i].epay);
    }
}
