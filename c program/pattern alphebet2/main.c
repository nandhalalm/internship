
 #include <stdio.h>

int main() {
    char ch;

    for(ch = 'A'; ch <= 'E'; ch++) {
        for(int i = 'A'; i <= ch; i++) {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}