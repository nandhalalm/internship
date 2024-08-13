#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int num;
    int f = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i < 5; i++) {
        if (array[i] == num) {
            f = 1;
            break;
        }
    }

    if (f=1) {
        printf("Number found!\n");
    }
    else{
        printf("Number not found!\n"); 
    }
}