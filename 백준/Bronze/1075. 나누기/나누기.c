#include <stdio.h>
int main() {
    int n, f;
    scanf("%d %d", &n, &f);
    n = n / 100 * 100;
    int i;
    for(i = 0; i < 100; i++) {
        if ((n + i) % f == 0) {
            printf("%02d\n", i);
            break;
        }
    }
    return 0;
}
