#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    char str[101];
    for (int i = 0; i < n; i++){
        scanf("%s",str);
        printf("%c%c\n",str[0],str[strlen(str)-1]);
    }
}