#include <stdio.h>

// Function to check if a number is prime
int Prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to check if a number can be expressed as sum of two prime numbers
int SumOfTwoPrimes(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (Prime(i) && Prime(num - i)) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (SumOfTwoPrimes(num)) {
        printf("%d can be expressed as the sum of two prime numbers.\n", num);
    } else {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
    }
    return 0;
}