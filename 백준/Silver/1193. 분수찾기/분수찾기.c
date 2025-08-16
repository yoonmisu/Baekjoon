#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    int line = 1;
    while (x > line) {
        x -= line;
        line++;
    }
    int a, b;
    if (line % 2 == 0) {
        a = x;
        b = line - x + 1;
    } else {
        a = line - x + 1;
        b = x;
    }
    printf("%d/%d\n", a, b);
    return 0;
}
