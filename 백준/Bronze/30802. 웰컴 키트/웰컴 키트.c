#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int size[6];
    for (int i = 0; i < 6; i++){
        scanf("%d", &size[i]);
    }
    int t,p;
    scanf("%d %d", &t, &p);
    int shirt = 0;
    for (int i = 0; i < 6; i++){
        shirt += size[i] / t;
        if (size[i] % t != 0) shirt++;
    }
    printf("%d\n", shirt);
    int pen = n / p;
    int remain = n % p;
    printf("%d %d\n", pen, remain);
    return 0;
}