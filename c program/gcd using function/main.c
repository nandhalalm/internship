#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a , b;
    printf("enter the number1:");
    scanf("%d",&a);
    printf("enter the number2:");
    scanf("%d",&b);
    
    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
    return 0;
}
