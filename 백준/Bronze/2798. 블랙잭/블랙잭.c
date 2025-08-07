#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int card[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &card[i]);
    }
    int max = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = card[i] + card[j] + card[k];
                if (sum <= m && sum > max) {
                    max = sum;
                }
            }
        }
    }
    printf("%d\n", max);
    return 0;
}
