#include <stdio.h>
int factorial(int n){
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int combination(int n, int k){
    return factorial(n) / (factorial(k) * factorial(n - k));
}
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", combination(n, k));
    
}