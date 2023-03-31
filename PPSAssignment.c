#include <stdio.h>
int main()
{
int d,m,y,yd,ym,yy,td,tm,ty;
printf("Enter the date ");
scanf("%d/%d/%d",&d,&m,&y);
printf("Entered current date is: %d/%d/%d\nPrevious(yesterday's) day is: ",d,m,y);
yd=d,ym=m,yy=y;
if(d==1)
{
if(m==3)
{ ym=m-1;
if (y%400==0 || (y%4==0 && y%100!=0))
yd=29;
else
yd=28; }
else if(m==1)
{ yd=31;
ym=12;
yy=y-1; }
else if(m==5||m==7||m==10||m==12)
{ ym=m-1;
yd=30; }
else
{ ym=m-1;

yd=31; }
}
else
yd=d-1;
printf("%d/%d/%d",yd,ym,yy);
td=d,tm=m,ty=y;
if(d==31)
{
if(m==12)
{ tm=1;
ty=y+1;
td=1; }
else
{ td=1;
tm=m+1; }
}
else if(d==30)
{
if(m==4||m==6||m==9||m==11)
{
td=1;
tm=m+1; }
else
td=31;
}
else if(d==29&&m==2)
{
td=1;
tm=m+1;
}
else if(d==28&&m==2)
{ if(y%400==0 || (y%4==0 && y%100!=0))
td=29;
else
{ td=1;
tm=3; }
}
else
td=d+1;
printf("\nTommorow's Date is: %d/%d/%d",td,tm,ty);
return 0;
}