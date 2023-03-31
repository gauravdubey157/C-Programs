#include <stdio.h>
int leap(int y)
{
    int q=0;
    if(y%400==0 && y%100==0 && y%4==0)
    {
        q=1;
    }
    return q;
}
int main()
{
    int year,p;
    scanf("%d",&year);
    p=leap(year);
    if(p==0)
    {
      printf("Not a Leap Year");  
    }
    else
    {
        printf("Leap Year");
    }
	return 0;
}