#include <stdio.h>

int main()
{
  float  f , s, temp;
  printf("enter the first number");
  scanf ("%f",&f);
  printf("enter the second number");
  scanf ("%f",&s);
   
   temp=f;
   f=s;
   s=temp;
   
    printf("\nAfter swapping, first number = %f\n", f);
    printf("After swapping, second number = %f", s);
  return 0;
}

