#include <stdio.h>

void swapByReference(int *num1, int *num2);

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Print original values
    printf("Before swapping (main):\n");
    printf("Value of num1 = %d\n", num1);
    printf("Value of num2 = %d\n\n", num2);

    swapByReference(&num1, &num2);

    printf("After swapping (main):\n");
    printf("Value of num1 = %d\n", num1);
    printf("Value of num2 = %d\n\n", num2);

    return 0;
}

void swapByReference(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
