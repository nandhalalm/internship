#include <stdio.h>

int power(int n, int r) {
    if (r == 0)
        return 1;
    else
        return n * power(n, r - 1);
}

int armstrong(int n, int sum, int temp) {
    if (n == 0)
        return sum;
    else {
        int rem = n % 10;
        sum = sum + power(rem, 3);
        return armstrong(n / 10, sum, temp);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int temp = num;
    int result = armstrong(num, 0, temp);
    if (result == temp)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);
    return 0;
}