#include <stdio.h>
#include <string.h>

int main() {
    int a, b, c;
    char ab[10];
    int result;
    scanf("%d %d %d", &a, &b, &c);
    sprintf(ab, "%d%d", a, b);
    result = atoi(ab) - c;
    printf("%d\n", a + b - c);
    printf("%d\n", result);

    return 0;
}
