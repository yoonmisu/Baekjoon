#include <stdio.h>
int main(){
    int arr[9][9];
    int max = 0;
    int x = 0, y = 0;
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > max){
                max = arr[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d\n", x+1, y+1);
    return 0;
}