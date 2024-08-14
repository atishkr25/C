#include <stdio.h>

 int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFib(int n) {
    if (n < 1) {
        printf("Invalid number of terms\n");
        return;
    } else {
        for (int i = 0; i < n; i++) {
            printf("%d ", fibonacci(i));
        }
    }
}

int main() {
    int n;
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);
    printFib(n);
    return 0;
}
