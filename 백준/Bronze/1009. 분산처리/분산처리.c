#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        a %= 10;
        if (a == 0) {
            printf("10\n");
            continue;
        }
        int result = 1;
        for (int i = 0; i < b % 4 + 4 * (b % 4 == 0); i++) {
            result = (result * a) % 10;
        }
        printf("%d\n", result);
    }
    return 0;
}
