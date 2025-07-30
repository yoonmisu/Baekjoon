#include <stdio.h>
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++){
        if (i < 2) continue;
        int is_prime = 1;
        for (int j = 2; j * j <= i; j++){
            if (i % j == 0){
                is_prime = 0;
                break;
            }
        }
        if(is_prime)
            printf("%d\n",i); 
    }
}