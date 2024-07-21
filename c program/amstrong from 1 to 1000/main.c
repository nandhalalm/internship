
#include <stdio.h>

int main()
{
    int n,temp,rem,sum=0;
    for(n=1;n<=1000;n++)
    {
        temp = n;
        sum=0;
        
        while(temp!=0)
        {
            rem =temp %10;
            sum+=rem * rem * rem;
            temp=temp / 10;
        }
        if (n==sum)
    
       printf(" %d ",n);
    }
    return 0;
}