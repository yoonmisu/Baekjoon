#include <stdio.h>
#include <string.h>
int main(){
    int num, num2;
    char str[20];
    scanf("%d",&num);
    for (int i = 0; i < num; i++){
        scanf("%d %s",&num2, str);
        for (int j = 0; j < strlen(str); j++){
            for (int k = 0; k < num2; k++){
                printf("%c",str[j]);
            }
        }
        printf("\n");
    }
}