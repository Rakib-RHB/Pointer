#include <stdio.h>

void swap(int x,int y)
{
    int tem;
    tem = x;
    x = y;
    y = tem;
}



int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("%d %d",a,b);


}
