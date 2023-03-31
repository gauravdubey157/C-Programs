#include <stdio.h>

void sum(int arr[],int len)
{
    int p=0,i;
    for(i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
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
    sum(arr,N);
	return 0;
}