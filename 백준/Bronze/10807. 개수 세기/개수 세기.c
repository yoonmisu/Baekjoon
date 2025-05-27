#include <stdio.h>
int main() {
    int n;
    int arr[100];     
    int v;       
    int count = 0;     
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &v);
    for (int j = 0; j < n; j++) {
        if (arr[j] == v)
            count++;       
    }
    printf("%d", count);
}