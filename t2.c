#include <stdio.h>
#include <stdlib.h>
int main()
{
    int lights[100001];
    int n,q,a,b,i,k,j,m;
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++)
    scanf("%d",&lights[i]);
    for(k=0;k<q;k++)
    {
        scanf("%d %d",&a,&b);
        for(j=a-1;j<=b-1;j++)
        {   
            if(lights[j]==0)
                lights[j]=1;
            else
                lights[j]=0;
        }        
    }
    for(m=0;m<n;m++)
    printf("%d ",lights[m]);
	return 0;
}