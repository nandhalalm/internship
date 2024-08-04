#include <stdio.h>

int main() {
    int n[5] = {10, 20, 31, 40, 50};
    int sum = 0;

    printf("Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", n[i]);
        sum += n[i]; 
    }
    printf("\nSum: %d\n", sum);

    return 0;
}