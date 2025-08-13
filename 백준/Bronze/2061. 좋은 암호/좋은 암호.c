#include <stdio.h>
int f(char P[], int K){
    int r = 0;
    for (int i = 0; P[i] != '\0'; i++){
        r = (r * 10 + (P[i] - '0')) % K;
    }
    return r;
}
int main(){
    char P[1000];
    int K;
    scanf("%s %d", P, &K);
    for (int i = 2; i < K; i++){
        if (f(P, i) == 0){
            printf("BAD %d", i);
            return 0;
        }
    }
    printf("GOOD");
    return 0;
}