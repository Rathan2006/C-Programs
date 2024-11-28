#include<stdio.h>
#include<string.h>
int main()
{
    char *str;
    printf("Enter the string:");
    gets(str);
    int l=strlen(str),count=0;
    for(int i=0;i<l;i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    printf("\n Length of given string including spaces is %d",l);
    printf("\n Length of given string excluding spaces is %d",l-count);
}
