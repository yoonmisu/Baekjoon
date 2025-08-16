#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d", &n);
    char num[101];
    for (int i = 0; i < n; i++){
        scanf("%s", num);
        int len = strlen(num);
        char last = num[len-1];
        if ((last - '0') % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}