#include <stdio.h>
#include <string.h>

int a[1000000], temp[1000000];
char output[12 * 1000000]; // 최대 11자리 + 개행 × 100만 개
int out_idx = 0;

void merge_sort(int s, int e) {
    if (s >= e) return;
    int m = (s + e) / 2;
    merge_sort(s, m);
    merge_sort(m + 1, e);

    int i = s, j = m + 1, k = s;
    while (i <= m && j <= e) {
        if (a[i] < a[j]) temp[k++] = a[i++];
        else temp[k++] = a[j++];
    }
    while (i <= m) temp[k++] = a[i++];
    while (j <= e) temp[k++] = a[j++];
    for (int t = s; t <= e; t++) a[t] = temp[t];
}

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    merge_sort(0, n - 1);

    for (int i = 0; i < n; i++) {
        // 숫자를 문자열로 만들어서 output 배열에 모아두기
        out_idx += sprintf(output + out_idx, "%d\n", a[i]);
    }

    // 한 번에 출력!
    printf("%s", output);

    return 0;
}
