#include <stdio.h>
#include<string.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    char str[100002];
    scanf("%s",str);
    while(t--)
    {
        int p=0,q=0;
    for(i=0;i<strlen(str);i++)
	{
	    if(str[i]=='0')
	    {
	        p++;
	    }
	    else if(str[i]=='1')
	    {
	        q++;
	    }
	}
	if(p==strlen(str)-1 || q==strlen(str)-1)
	{
	    printf("YES\n");
	}
	else
	{
	    printf("NO\n");
	}
    }
	    return 0;
}