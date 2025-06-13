#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char word[101];
    scanf("%s",word);
    for (int i = 0; i < strlen(word); i++){
        if (islower(word[i])){
            printf("%c",toupper(word[i]));
        } else {
            printf("%c", tolower(word[i]));
        }
    }
    printf("\n");
    return 0;
}