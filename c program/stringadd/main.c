#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char result[200];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    strcpy(result, str1);
    strcat(result, str2);

    printf("The concatenated string is: %s\n", result);

    return 0;
}