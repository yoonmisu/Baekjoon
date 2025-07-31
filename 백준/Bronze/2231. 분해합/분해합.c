#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int found = 0;
    for (int i = 0; i <= n; i++){
        int temp = i;
        int sum = 0;
        while (temp > 0){
            sum += temp % 10;
            temp /= 10;
        }
        if (i + sum == n){
            printf("%d\n",i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("0");
    return 0;
}