#include <stdio.h>

int main() {
    double num1, num2, result;
    double *ptr1, *ptr2;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    ptr1 = &num1;
    ptr2 = &num2;
    result = (*ptr1) * (*ptr2);
    printf("Result: %.2lf\n", result);
    return 0;
}

