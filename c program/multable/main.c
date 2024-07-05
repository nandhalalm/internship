
#include <stdio.h>

int main()
{
    int num,
    i=1;

        printf("enter a number :");
        scanf("%d",&num);

        while (i <=10)
        {
            printf("%dx%d = %d\n",num,i,num*i);
            i++;
        }
    

    return 0;
}