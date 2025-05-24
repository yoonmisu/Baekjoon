#include <stdio.h>
int main(){
    int t, x;
    scanf("%d %d", &t, &x);
    for(int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        if (x > n)
            printf("%d ",n);
}
    return 0;
}