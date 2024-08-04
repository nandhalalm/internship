
#include <stdio.h>

int main()
{
    int size=5;
    int array1[size];
    int array2[size];
    int sumarray[size];
    
    printf("enter the 1st array elements:");
    for(int i = 0;i < size; i++){
        scanf("%d",&array1[i]);
    }
    printf("enter the 2nd array element:\n");
    for(int i= 0;i<size ; i++){
        scanf("%d",&array2[i]);
    }
    for(int i=0; i<size;i++){
        sumarray[i]=array1[i]+array2[i];
    }
    printf("Sum of arrays:\n");
    for (int i = 0; i < size; i++) {
       printf("%d ", sumarray[i]);
}
    return 0;
}