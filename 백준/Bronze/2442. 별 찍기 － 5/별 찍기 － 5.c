#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < n - i; j++){
            printf(" ");
        }
        for (int z = 0; z < 2 * i - 1; z++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}