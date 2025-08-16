#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int num = n;
    int count = 0;
    do {
        int ten = n / 10;
        int one = n % 10;
        int sum = ten + one;
        n = (one * 10) + (sum % 10);
        count++;
    } while (n != num);
    printf("%d\n", count);
    return 0;
}