#include <stdio.h>

int main()
{
    int a[100],n,i,s,e,temp,j,search,flag=0;

    printf("Enter the size:");
    scanf("%d",&n);
    printf("\nEnter starting index:");
    scanf("%d",&s);
    printf("\nEnter ending index:");
    scanf("%d",&e);
    printf("\nEnter elments of the array:");

    for(i=s;i<e;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=s;i<e;i++)
    {
        for(j=i+1;j<e;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n");
    printf("Ascending order:\n");

    for(i=s;i<e;i++)
    {
        printf("%d\n",a[i]);
    }

    printf("\n");
    printf("Element to search:");
    scanf("%d",&search);

    for(i=s;i<e;i++)
    {
        if(a[i]==search)
        {
            flag=1;
            break;
        }
    }

    if(flag)
    {
        printf("%d element  is present sorted array",search);
    }
    else
    {
        printf("%d  element is not present",search);
    }
  

    return 0;
}