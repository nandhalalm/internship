#include <stdio.h>

// Function to check prime numbers
void primeornot(int st, int en) {
    int i, j, count;
    printf("\n\nThe prime numbers between %d and %d are:", st, en);

    for (i = st; i <= en; i++) {
        count = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d ", i);
        }
    }
}

int main() {
    int start, end;
    printf("Enter the start value: ");
    scanf("%d", &start);
    printf("Enter the end value: ");
    scanf("%d", &end);
    primeornot(start, end);
    return 0;
}