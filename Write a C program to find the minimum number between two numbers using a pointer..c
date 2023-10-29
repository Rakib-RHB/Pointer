#include <stdio.h>

int findMinimum(int *ptr1, int *ptr2) {
    if (*ptr1 < *ptr2) {
        return *ptr1;
    } else {
        return *ptr2;
    }
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int minimum = findMinimum(&num1, &num2);

    printf("The minimum number between %d and %d is : %d\n", num1, num2, minimum);

    return 0;
}
