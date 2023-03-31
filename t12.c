#include <stdio.h>
union Time
{
 int A,B,C,D,E,F;
};
int main()
{
 union Time harsh;
 scanf("%d",&harsh.A);
 int temp1=harsh.A;
 scanf("%d",&harsh.B);
 printf("%d\n",temp1-harsh.B);
 scanf("%d",&harsh.C);temp1=harsh.C;
 scanf("%d",&harsh.D);
 printf("%d\n",temp1-harsh.D);
 scanf("%d",&harsh.E);temp1=harsh.E;
 scanf("%d",&harsh.F);
 printf("%d\n",temp1-harsh.F);
return 0;}