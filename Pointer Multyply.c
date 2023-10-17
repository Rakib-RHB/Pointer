void main()
{
    int a, b,r;
    int *p,*q;
    p = &a;
    q = &b;
    scanf("%d",&a);
    scanf("%d\n",p);
    scanf("%d",&b);
    scanf("%d\n",q);
    r = (*p) * (*q);
    printf("%d\n",r);

}
