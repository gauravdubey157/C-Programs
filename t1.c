#include <stdio.h>

int sum(int arr[],int start,int len)
{
    int p=0,i;
    for(i=start;i<len;i++)
    {
        p+=arr[i];
    }
    return p;
}
int main()
{
    int N,i;
    scanf("%d",&N);
    int arr[100],sumofarray;
    for(i=0;i<N;i++)
    {
    scanf("%d",arr[i]);
    }
    sumofarray=sum(arr,0,N);
    printf("%d",sumofarray);
	return 0;
}