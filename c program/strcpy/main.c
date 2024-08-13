#include<stdio.h>
#include <string.h>
int main() 
{
    int i,len;
	char ch[20]= {'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};
	len = strlen(ch);
	printf("Length of string is:%d",len);
	return 0;
}