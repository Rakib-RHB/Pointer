#include<stdio.h>
int main()
{
    char s[50];
    gets(s);
    char *p;
    p = &s[0];
    while(*p != '\0')
    {
        *p = toupper(*p);
        p++;
    }
    printf("%s\n", s);
}
