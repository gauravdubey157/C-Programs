#include <stdio.h>
#include<string.h>
int main()
{
   int t;
   while(t--)
   {
       char str[100001];
       scanf("%s",str);
       int i=0,c=0;
       for(i=0;i<strlen(str);i++)
       {
          if(str[i]=='0' && str[i]=='1' && str[i]=='0')
          {
              c++;
              break;
          }
          else if(str[i]=='1' && str[i]=='0' && str[i]=='1')
          {
              c++;
              break;
          }
       }
       if(c>0)
       {
           printf("Good\n");
       }
       else
       {
           printf("Bad\n");
       }
   }
	return 0;
}