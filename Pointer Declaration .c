#include<stdio.h>
int main()
{
    int a  = 5;
    int c  = 10;
    // declare a pointer
    int *b,d;
    b = &a;
    d = &c;
    printf("%d",b);// referencing

    printf(" %d",*b);// dereferencing

    printf(" %d",d);

}

