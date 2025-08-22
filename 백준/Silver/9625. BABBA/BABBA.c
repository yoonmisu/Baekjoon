#include<stdio.h>
int main(){
    int k;
    scanf("%d", &k);
    int a = 1, b = 0;
    for (int i = 0; i < k; i++){
        int temp = b;
        b = a + b;
        a = temp;
    }
    printf("%d %d", a, b);
    return 0;
}