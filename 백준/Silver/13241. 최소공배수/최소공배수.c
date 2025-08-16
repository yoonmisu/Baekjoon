#include <stdio.h>
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long lcm = (a / gcd(a, b)) * b;
    printf("%lld\n", lcm);
    return 0;
}
