#include <stdio.h>
#include <string.h>

int compare(char *a, char *b) {
    if (strlen(a) != strlen(b))
        return strlen(a) - strlen(b);
    return strcmp(a, b);
}

void merge(char arr[][51], int left, int mid, int right, char temp[][51]) {
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right) {
        if (compare(arr[i], arr[j]) <= 0)
            strcpy(temp[k++], arr[i++]);
        else
            strcpy(temp[k++], arr[j++]);
    }

    while (i <= mid)
        strcpy(temp[k++], arr[i++]);
    while (j <= right)
        strcpy(temp[k++], arr[j++]);
    for (int t = left; t <= right; t++)
        strcpy(arr[t], temp[t]);
}

void merge_sort(char arr[][51], int left, int right, char temp[][51]) {
    if (left >= right)
        return;

    int mid = (left + right) / 2;
    merge_sort(arr, left, mid, temp);
    merge_sort(arr, mid + 1, right, temp);
    merge(arr, left, mid, right, temp);
}

int main() {
    int n;
    char words[20000][51], temp[20000][51];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%s", words[i]);

    merge_sort(words, 0, n - 1, temp);

    printf("%s\n", words[0]);
    for (int i = 1; i < n; i++) {
        if (strcmp(words[i], words[i - 1]) != 0)
            printf("%s\n", words[i]);
    }
}