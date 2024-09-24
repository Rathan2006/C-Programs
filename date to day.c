#include<stdio.h>
int main()
{
    int Y,M,D,a,i;
    printf("enter the year of birth in YYYY format:");
    scanf("%d",&Y);
    printf("enter the month of birth in MM format:");
    scanf("%d",&M);
    printf("enter the date of birth in DD format:");
    scanf("%d",&D);
    int day=0;
    a=6;
    //1st january 2000 is saturday so i am assigning it on a as value of a is equal to 6
    if(Y>=2000)
    {
    for(i=2000;i<Y;i++)
    {
        if(i%4==0 && i%100!=0)
        {
            day+=366;
        }
        else if(i%100==0 && i%400==0)
        {
            day+=366;
        }
        else
        {
            day+=365;
        }
    }
    for(i=1;i<M;i++)
    {
        if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
        {
            day+=31;
        }
        else if(i=2)
        {
            if(Y%4==0 && Y%100!=0)
        {
            day+=29;
        }
        else if(Y%100==0 && Y%400==0)
        {
            day+=29;
        }
        else
        {
            day+=28;
        }
        }
        else if(i==4 || i==6 || i==9 || i==11)
        {
            day+=30;
        }
  }
   day+=D;
}
  printf("%d \n",day);
  for(i=1,a=6;i<day;i++)
  {
      a+=1;
      if(a>7)
      {
          a=1;
      }
  }
  switch(a)
  {
      case 1:printf("Monday");
             break;
      case 2:printf("Tuesday");
             break;
      case 3:printf("Wednesday");
             break;
      case 4:printf("Thursday");
             break;
      case 5:printf("Friday");
             break;
      case 6:printf("Saturday");
             break;
      case 7:printf("Sunday");
             break;
  }

  return 0;
}
