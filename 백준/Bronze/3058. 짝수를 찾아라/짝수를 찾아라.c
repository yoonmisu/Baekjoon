#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int sum = 0;
        int min = 100;
        for (int i = 0; i < 7; i++) {
            int x;
            scanf("%d", &x);
            if (x % 2 == 0){
                sum += x;
                if (x < min) min = x;
            }
        }
        printf("%d %d\n", sum, min);
    }
    return 0;
}
