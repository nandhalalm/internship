
#include <stdio.h>

int main()
{
    int a,b,big,i,lcm;
    printf("enter the 2 numbers:");
    scanf("%d%d",&a,&b);
    big=a>b?a:b;
      for(i=big;i<=a*b;i=big+i)
      {
          if(i%a==0 && i%b==0)
          {
              lcm=i;
              break;
          }
      }
         printf("lcm=%d\n",lcm);
    return 0;
}