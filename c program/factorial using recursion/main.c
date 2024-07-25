#include <stdio.h>

// Function to calculate the factorial of a number using recursion
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error:negative numbers\n");
    } else {
        printf("Factorial of %d = %d\n", num, factorial(num));
    }
    return 0;
}