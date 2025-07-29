#include <stdio.h>
int main(){
    long a,b,c;
    while(1){
        scanf("%ld %ld %ld", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) break;
        if (a > b && a > c) {
            if (a * a == b * b + c * c)
                printf("right\n");
            else
                printf("wrong\n");
        }
        else if (b > a && b > c) {
            if (b * b == a * a + c * c)
                printf("right\n");
            else
                printf("wrong\n");
        }
        else {
            if (c * c == a * a + b * b)
                printf("right\n");
            else
                printf("wrong\n");
        }
    }
    return 0;
}