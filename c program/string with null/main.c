
#include <stdio.h>

int main()
{
    char j[11]="nandhalalm";
    int i=0;
    int count =0;
    while(j[i]!='\0')
    {
        if(j[i]=='a'||j[i]=='e'||j[i]=='i'||j[i]=='o'||j[i]=='u')
        {
            count++;
        }
        i++;
    }
    printf("the number of vowel %d",count);
}