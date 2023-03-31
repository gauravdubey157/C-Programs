#include <stdio.h>
int main()
{
    int width, height, c=0;
    int n;
    scanf("%d",&n);
    while(n--)
    {
    scanf("%d %d",&width,&height);
    if(width/height>=1.6 && width/height<=1.7)
    {
      c++;
    }
    else if(height/width >=1.6 && height/width<=1.7)
    {
        c++;
    }
    }
    printf("%d",c);
	return 0;
}