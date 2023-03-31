/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

struct one{
    char c;
    int a;
};
 
int main()
{
    struct one*p;
    p=(struct one*)malloc(sizeof(struct one));
    p->c='c';
    p->a=10;
    printf("%c",p->c);
    printf("%d",p->a);
    return 0;
}