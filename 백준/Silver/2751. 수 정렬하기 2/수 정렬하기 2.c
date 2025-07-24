#include <stdio.h>
#include <string.h>
int a[1000000], temp[1000000];
char result[12 * 1000000];
int outindex = 0;

void merge_sort(int start, int end) {
    if (start >= end) return;
    int mid = (start + end) / 2;
    merge_sort(start, mid);
    merge_sort(mid + 1, end);
    int i = start, j = mid + 1, k = start;
    while (i <= mid && j <= end) {
        if (a[i] < a[j]) temp[k++] = a[i++];
        else temp[k++] = a[j++];
    }
    while (i <= mid) temp[k++] = a[i++];
    while (j <= end) temp[k++] = a[j++];
    for (int t = start; t <= end; t++) a[t] = temp[t];
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    merge_sort(0, n - 1);
    for (int i = 0; i < n; i++) {
        outindex += sprintf(result + outindex, "%d\n", a[i]);
    }
    printf("%s", result);
    return 0;
}
