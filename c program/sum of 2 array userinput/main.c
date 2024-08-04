
#include <stdio.h>

int main()
{
    int size;
    int sum=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);

    int n[size];
    printf("Enter the array elements:\n");
    for(int i= 0; i < size; i++)
    {
        scanf("%d",&n[i]);
    }
    
    
    for(int i= 0; i < 5; i++)
    {
        printf("%d \n",n[i]);
        sum+=n[i];
    }
    
    printf("sum :%d \n",sum);

    return 0;
}