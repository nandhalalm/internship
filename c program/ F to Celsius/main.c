
#include <stdio.h>

int main()
{
    float fer,cel;
    printf("enter the fereinheit :");
    scanf("%f",&fer);
    cel = ((fer-32)*5)/9;
    printf("\n\n Temperature in Celsius is : %f",cel);

    return 0;
}
