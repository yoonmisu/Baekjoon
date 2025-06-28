#include <stdio.h>
int main(){
    int student[31] = {0};
    int num;
 
    for (int i = 0; i < 28; i++) {
        scanf("%d", &num);
        student[num] = num;
    }
    for (int i = 1; i < 31; i++) {
        if (student[i] == 0)
            printf("%d\n", i);
    }
    return 0;
}