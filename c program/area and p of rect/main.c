#include <stdio.h>

int main() {
    float l, b, area, perimeter;
    printf("enter length  ");
    scanf("%f", &l);
    printf("enter breadth ");
    scanf("%f", &b);

    area = l * b;
    perimeter = 2 * (l + b);

    printf("the area of rect %f\n", area);
    printf("the perimeter of rect %f\n", perimeter);
    return 0;
}