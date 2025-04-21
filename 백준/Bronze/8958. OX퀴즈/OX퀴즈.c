#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int score=1, total=0, j=0;
        char a[81];
        scanf("%s",a);
        while(a[j]!='\0'){
            if(a[j++]=='O')
                total += score++;
            else
                score=1;
        }
        printf("%d\n",total);
    }
}