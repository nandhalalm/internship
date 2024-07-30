#include <stdio.h>

int armstrong(int num) {
    int temp = num;
    int sum = 0;
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return (sum == num);
}

int isPrime(int num) {
    if (num <= 1) 
       return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) 
       return 0;
    }
    return 1;
}


int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    if(armstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}