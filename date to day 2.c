#include<stdio.h>//program to find day on the date you entered(date input from 1/1/1 to ...)
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
    for(i=01;i<M;i++)
    {
        if(i==1)
        {
            day+=31;
        }
        else if(i==2)
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
        else if(i==3)
        {
            day+=31;
        }
        else if(i==5)
        {
            day+=31;
        }
        else if(i==7)
        {
            day+=31;
        }
        else if(i==8)
        {
            day+=31;
        }
        else if(i==10)
        {
            day+=31;
        }
        else if(i==12)
        {
            day+=31;
        }
        else if(i==4)
        {
            day+=30;
        }
        else if(i==6)
        {
            day+=30;
        }
        else if(i==9)
        {
            day+=30;
        }
        else if(i==11)
        {
            day+=30;
        }
  }
   day+=D;
    for(i=1,a=6;i<day;i++)
  {
      a+=1;
      if(a>7)
      {
          a=1;
      }
  }
}
   if(Y<2000)
    {
    for(i=1999;i>Y;i--)
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
    for(i=12;i>M;i--)
    {
        if(i==1)
        {
            day+=31;
        }
        else if(i==2)
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
        else if(i==3)
        {
            day+=31;
        }
        else if(i==5)
        {
            day+=31;
        }
        else if(i==7)
        {
            day+=31;
        }
        else if(i==8)
        {
            day+=31;
        }
        else if(i==10)
        {
            day+=31;
        }
        else if(i==12)
        {
            day+=31;
        }
        else if(i==4)
        {
            day+=30;
        }
        else if(i==11)
        {
            day+=30;
        }
        else if(i==6)
        {
            day+=30;
        }
        else if(i==9)
        {
            day+=30;
        }
  }
       if(M==1 || M==3 || M==5 || M==7 || M==8 || M==10 || M==12)
        {
            day=day+(31-D);
        }
        else if(M==2)
        {
            if(Y%4==0 && Y%100!=0)
        {
            day=day+(29-D);
        }
        else if(Y%100==0 && Y%400==0)
        {
            day=day+(29-D);
        }
        else
        {
            day=day+(28-D);
        }
        }
        else if(M==4 || M==6 || M==9 || M==11)
        {
            day=day+(30-D);
        }
        day=day+2;//as we are going backwards in the day variable the first day i.e. 1st jan 2000 and last day i.e. the day we entered are not counted so we are adding 2 to the days count

       for(i=1,a=6;i<day;i++)
  {
      a=a-1;
      if(a<1)
      {
          a=7;
      }
  }

}
  printf("%d \n",day);
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
