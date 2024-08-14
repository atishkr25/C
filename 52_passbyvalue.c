#include <stdio.h>

void swapByValue(int num1, int num2);

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping in main:\n");
    printf("Value of num1 = %d\n", num1);
    printf("Value of num2 = %d\n\n", num2);

    swapByValue(num1, num2);

    // Print swapped values
    printf("After swapping in main:\n");
    printf("Value of num1 = %d\n", num1);
    printf("Value of num2 = %d\n\n", num2);

    return 0;
}

void swapByValue(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
