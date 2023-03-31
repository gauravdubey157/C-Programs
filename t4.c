#include <stdio.h>
#include<string.h>

int main()
{
    int t,n,b=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;
    while(c<=n)
    {
      int s=0,p=1;
    for(int i=0;i<n;i++)
    {
      s=s+a[i];
      p=p*a[i];
    }
    if(s==p)
    {
        s=0,p=1;
        b++;
    }
    c++;
    }
    printf("%d",b);
    }
    return 0;
    }
