#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int h, w, n;
        scanf("%d %d %d", &h, &w, &n);
        int floor = (n - 1) % h + 1;
        int room = (n - 1) / h + 1;
        printf("%d\n", floor * 100 + room);
    }
    return 0;
}