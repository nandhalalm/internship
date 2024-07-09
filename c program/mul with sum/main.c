#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);

    for (i = 1; i <= 10; i++) {
        int product = num * i;
        printf("%d x %d = %d\n", num, i, product);
        sum += product;
    }

    printf("Sum of the table: %d\n", sum);

    return 0;
}