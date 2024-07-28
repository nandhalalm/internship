
#include <stdio.h>
int prime (int num)
{
    if(num <=1)
    return 0;
    
    for( int i=2; i*i<=num; i++)
    {
        if (num%i==0)
        return 0;
    }
  return 1;  
}


int main()
{
    int num;
    printf(" enter the number :");
    scanf("%d",&num);
    
    if(prime(num)) 
    {
        printf("%d the number is a prime number \n",num);
    }
    else
    {
        printf(" %d the number is not prime \n",num);
    }

    return 0;
}