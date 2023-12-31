 /* Test Data :
Input the value of 1st element : 5
Input the value of 2nd element : 6
Input the value of 3rd element : 7
Expected Output :

The value before swapping are :
element 1 = 5
element 2 = 6
element 3 = 7

The value after swapping are :
element 1 = 7
element 2 = 5
element 3 = 6   */


#include <stdio.h>
void swapNumbers(int *x,int *y,int *z);
int main()
{
    int e1,e2,e3;
	printf("\n\n Pointer : Swap elements using call by reference :\n");
	printf("------------------------------------------------------\n");
    printf(" Input the value of 1st element : ");
    scanf("%d",&e1);
	printf(" Input the value of 2nd element : ");
    scanf("%d",&e2);
	printf(" Input the value of 3rd element : ");
    scanf("%d",&e3);


    printf("\n The value before swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n",e1,e2,e3);
    swapNumbers(&e1,&e2,&e3);
    printf("\n The value after swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n\n",e1,e2,e3);
    return 0;
}
void swapNumbers(int *x,int *y,int *z)
{
    int tmp;
    tmp=*y;
    *y=*x;
    *x=*z;
    *z=tmp;
}
