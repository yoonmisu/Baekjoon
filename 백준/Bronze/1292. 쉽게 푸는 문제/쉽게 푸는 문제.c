#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int s[1000];
    int idx = 0;
    int num = 1;
    while (idx < b){
        for (int i = 0; i < num; i++){
            if (idx >= b)
                break;
            s[idx] = num;
            idx++;
        }
        num++;
    }
    int sum = 0;
    for (int i = a - 1; i < b; i++){
        sum += s[i];
    }
    printf("%d\n", sum);
    return 0;
}