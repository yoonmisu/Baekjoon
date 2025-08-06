#include <stdio.h>
int gcd(int a, int b){
    if (b == 0){
       return a;
    }
    return gcd(b, a % b);
}
long long lcm(int a, int b){
    return (long long) a * b / gcd(a, b);
}
int main(){
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%lld\n",lcm(a,b));
    }
    return 0;
}