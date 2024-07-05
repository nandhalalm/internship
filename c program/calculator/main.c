
#include <stdio.h>

int main()
{
    float a,b;
    char ch;
    printf("enter your choice:");
    scanf("%c",&ch); 
    printf("enter 2 number:");
    scanf("%f%f",&a,&b);
  
       switch (ch)
       {
           case 'a':
           printf("sum: %f" ,a+b);
           break;
           
           case 'b':
           printf("sub: %f" ,a-b);
           break;
           
           case  'c':
           printf("diffrence: %f",a/b);
           break;
           
           case  'd':
           printf("mul: %f",a*b);
           break;
           
           
       }
       
     return 0 ;  
}
