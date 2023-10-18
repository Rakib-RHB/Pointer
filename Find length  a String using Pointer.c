#include<stdio.h>
int main()
{
    char s[50];
    char *p,*q;
    gets(s);
    p = q = &s[0];
    int n = 0;
    while (*p != '\0')
    {
        p++;
    }
    n = p - q;
    printf("Length : %d",n);


}
