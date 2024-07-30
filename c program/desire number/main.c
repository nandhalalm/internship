#include <stdio.h>
#include <math.h>
int desar(int n)
{
    int temp,sum=0,a,i,d;
    temp=n;
    a=n;
    int count=0;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    i=count;
    while(a>0 && i>0)
    {
        d=a%10;
        sum=sum+pow(d,i);
        a=a/10;
        i--;
    }
    return sum;
}

int main()
{
    int n,result;
    printf("Enter a number:");
    scanf("%d",&n);
    result=desar(n);
    if(result==n)
    {
        printf("%d is a desarium number",n);
    }
    else
    {
        printf("%d is not a desarium number",n);
    }
    return 0;
}