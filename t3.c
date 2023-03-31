#include <stdio.h>
#include<string.h>

int main()
{
    int a=0;
    char str[100],ch;
    scanf("%s",&str);
    scanf("%c",&ch);
    scanf("%c",&ch);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==ch)
        {
            str[i]=' ';
            a++;
        }
    }
    if(a==0)
    {
        printf("Character not found");
    }
    else
    {
        printf("%s",str);
    }
    return 0;
}
