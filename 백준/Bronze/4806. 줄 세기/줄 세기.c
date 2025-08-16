#include <stdio.h>
int main() {
    char line[100];
    int count = 0;

    while (fgets(line, sizeof(line), stdin) != NULL) {
        count++;
    }

    printf("%d\n", count);
    return 0;
}