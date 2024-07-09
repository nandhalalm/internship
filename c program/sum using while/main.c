
#include <stdio.h>

int main()
{
    int n=0,sum=0;
    
    printf("enter the number");
    scanf("%d",&n);
    
   
     while (n != -1) {
        sum += n;
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &n);
    }

    printf("The sum of the numbers is: %d\n", sum);


    return 0;
}