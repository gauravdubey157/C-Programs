#include <stdio.h>
#include<string.h>
int replace (int num)
{
    int q=num;
    if(q==0)
    {
        q=7;
    }
    return q;
}
int main()
{
    int num,a,i,p;
    char s[100];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        a=replace(s[i]-'0');
        printf("%d",a);
    }    
	return 0;
}