#include <stdio.h>
int main(void) {
    char s[101];
    scanf("%100s", s);
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    int p = 1;
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) {
            p = 0;
            break;
        }
    }
    printf("%d\n", p);
    return 0;
}
