
#include <stdio.h>

int main()
{
     int mark;
     printf("enter the marks:");
     scanf("%d",&mark);
     
     if(mark>90 && mark<=100)
     {
        printf("a") ;
     }
    else if(mark>80 && mark<=90)
     {
        printf("b") ;
     }
    else if(mark>70 && mark<=80)
     {
        printf("c") ;
     }
    else if(mark>60 && mark<=70)
     {
        printf("d") ;
     }
    else 
       {
        printf("fail") ;
     }
    return 0; 
  }
