
#include <stdio.h>

int main()
{
    int num;
    
    printf("enter the number to check");
    scanf("%d",&num);
    
    
    if(num>0)
       printf(" the number is positive %d",num);
    else if(num<0)
       printf(" the number is negative %d",num);
    else
        printf("the number is zero %d",num);

    return 0;
}
