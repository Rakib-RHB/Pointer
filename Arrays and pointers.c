#include<stdio.h>
int main()
{
    int a[5] = {3,8,2,7,9};
    int *p;
    p = &a[0];
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",p+3);
    printf("%d\n",*(p+3));
    printf("%d\n",*p+3);

}
