#include <stdio.h>
int main(){
    int score[5];
    int maxscore = 0;
    int winner = 0;
    for (int i = 0; i < 5; i++){
        int sum = 0;
        for (int j = 0; j < 4; j++){
            int x;
            scanf("%d", &x);
            sum += x;
        }
        score[i] = sum;
            if (sum > maxscore){
                maxscore = sum;
                winner = i + 1;
            } 
        }
    printf("%d %d\n", winner, maxscore);
    return 0;
}