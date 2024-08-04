#include <stdio.h>

int main() {
    int n[] = {10, 20, 31, 40, 50,20,10,10,10,18};
    int sum = 0;

    printf("Array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", n[i]);
        sum += n[i]; 
    }
    printf("\nSum: %d\n", sum);

    printf("Numbers  more than once: ");
    for (int i = 0; i < 10; i++) 
    {
        for (int j = i + 1; j < 10; j++) 
        {
            if (n[i] == n[j] ) 
            {
                printf("%d ", n[j]);
                break;
                
            }
        }
    }
    return 0;
}