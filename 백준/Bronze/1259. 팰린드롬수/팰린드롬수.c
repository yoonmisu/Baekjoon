#include <stdio.h>
#include <string.h>
int main(){
    int palindrome, len;
    char num[10000];
    while (1) {
        scanf("%s",num);
        if (strcmp(num, "0") == 0) break;
        palindrome = 1;
        len = strlen(num);
        for (int i = 0; i < len / 2; i++) {
            if (num[i] != num[len - 1 - i]){
                palindrome = 0;
                break;
            }
        }
        if (palindrome == 1)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}