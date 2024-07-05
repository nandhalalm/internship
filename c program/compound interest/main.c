#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate/100), time);

    printf("Compound interest: %f\n", amount - principal);

    return 0;
}