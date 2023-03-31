#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{//creating a structure node to implement stack using linked list
    int data;
    struct node *next;
}*top=NULL,*t;
void push(int x)
{//function to push value to stack
    t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL)
    printf("Stack Overflow\n");
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}
int pop()
{//function to pop value from stack
    int x=-1;
    if(top)
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}
int main()
{
    int t;//inputting no of test cases
    scanf("%d",&t);
    while(t--)
    {
        int Q;
        scanf("%d",&Q);
        while(Q--)//inputting no of queries
        {
            char query[10];
            scanf("%s",query);//inputting query
            if(strcmp(query,"place")==0)
            {
                int x;
                scanf("%d",&x);
                push(x);
            }
            else if(strcmp(query,"remove")==0)
            printf("%d ",pop());
        }
        while(top)
        pop();
        printf("\n");
    }
    return 0;
}