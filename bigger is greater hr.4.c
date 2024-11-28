#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int t,k,y,m;
    char s,rst[100];
    printf("Enter number of test cases:");
    scanf("%d",&t);
    char w[100],arr[t][100],x3;
    printf("Enter the test cases:");
    for(int i=0;i<=t;i++)
    {
        k=0;
        fgets(w,100,stdin);
        int l=strlen(w);
        for(int m=0;m<l-1;m++)//to find if the input string is identical or not
        {
            int x1=w[m],x2=w[m+1],x3;
            if(x1==x2)
            {
                k++;
            }
        }
        if(k==l-1)
        {
            strcpy(arr[i],"no answer");
        }
        else
        {
         for(int m=0;m<l-1;m++)//to find the rightmost element which is smaller than its next element and assume this as point a
        {
            int x1=w[m],x2=w[m+1],x3;
            if(x1<x2)
            {
                x3=w[m];
                k=m;
            }
        }
         for(int m=k+1;m<l;m++)//to find the element which is smallest to the right of point a and greater than element at point a and assume this as point b
        {
            int x1=w[k],x2=w[m],x3=w[k+1];
            if(x1<x2 && x3<x2)
            {
                x3=w[m];
                y=m;
            }
        }
        s=w[k];//to swap the elements at point a and point b
        w[k]=w[m];
        w[m]=s;
        for(int v=k+1;v<l;v++)//to reverse the string from next letter of point a to end
        {
            rst[v-k-1]=w[k];
        }
        strrev(rst);
        for(int v=k+1;v<1;v++)
        {
            w[k]=rst[v-k-1];
        }
        puts(w);

        }
        //strcpy(arr[i],w);

    }
    for(int i=0;i<=t;i++)
    {
        puts(arr[i]);
    }

}
