
#include <stdio.h>

int main()
{
    int n=5,i,j;
    
    for(i=n;i>=0;i--)
    {
      for(j=0;j<=2*(n);j++)
      {
         if((n-i<j)&&(j<n+i)) 
           
           printf("  ");
         else
           printf(" *");
      }
     printf("\n");
    }

    
    for(i=1;i<=n;i++)
    {
      for(j=0;j<=2*(n);j++)
      {
         if((n-i<j)&&(j<n+i)) 
           
           printf("  ");
         else
           printf(" *");
      }
     printf("\n");
    }

    return 0;
}
