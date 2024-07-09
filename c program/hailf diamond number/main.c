#include <stdio.h>

int main()
{
   int i,j,n=1;
   
           for(i=0;i<=5;i++){
                for(j=0;j<i;j++){
                    
                   printf("%d ",n);
                    n=n+2;
                      
               }
              printf("\n");
           }
           
           n=0;
           for(i=0;i>=5;i--){                               
                for(j=0;j>i;j--){
                    
                   printf("%d ",n);
                    n=n+2;
                      
               }
              printf("\n");
           }
           

}