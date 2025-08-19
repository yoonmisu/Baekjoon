#include <stdio.h>
int main(void) {
    char s[101];
    scanf("%100s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        printf("%c", s[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    return 0;
}