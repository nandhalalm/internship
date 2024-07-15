#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the pattern: ");
    scanf("%d", &n);

    // Print the top and bottom borders
    for (int i = 1; i <= n ; i++) {
        printf("*");
    }
    printf("\n");

    // Print the middle rows
    for (int i = 2; i <= n - 1; i++) {
        printf("*");
        for (int j = 2; j <= n - 1; j++) {
            printf(" ");
        }
        printf("* \n");
    }

    // Print the top and bottom borders again
    for (int i = 1; i <= n; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}