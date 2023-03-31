#include <stdio.h>
 
long facto(int n)
{
    if(n==0)
    {return 1;}
    
    return(n*facto(n-1));
}
int main()
{
    int p;
    scanf("%d",&p);
    printf("%ld",facto(p));
	return 0;
}