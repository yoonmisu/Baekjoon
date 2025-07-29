#include <stdio.h>
int gcd(int a, int b){
    while (b != 0){
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}
int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));
    printf("%d\n", lcm(x, y));
    return 0;
}