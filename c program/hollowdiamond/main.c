
#include <stdio.h>

int main()
{
    int n ,i,s,j;
    printf("enter the number ");
    scanf("%d",&n);
    
   for(i=0;i<=n;i++)
   {
       for(j=0;j<=2*n+1;j++)
       {
        if((n-i<j) && (j<n+i+1)) 
         
            printf(" ");
        else
            printf("*");
            
       }
       printf("\n");
   }
    for(i=n;i>=0;i--)
   {
       for(j=0;j<=2*n+1;j++)
       {
        if((n-i<j) && (j<n+i+1)) 
         
            printf(" ");
        else
            printf("*");
            
       }
       printf("\n");
   }

   
}