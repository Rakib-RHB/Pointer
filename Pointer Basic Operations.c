#include<stdio.h>
int main()
{
    int i = 5;
    int *ip = &i;
    printf("%d\n",*ip);
    *ip = 7;
    printf("%d\n",*ip);

}
