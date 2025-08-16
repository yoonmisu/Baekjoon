#include <stdio.h>
int main() {
    int result;
    scanf("%d", &result);
    while (1) {
        char op;
        int num;
        scanf(" %c", &op);
        if (op == '=') break;
        scanf("%d", &num);
        switch (op) {
            case '+': result += num; break;
            case '-': result -= num; break;
            case '*': result *= num; break;
            case '/': result /= num; break;
        }
    }
    printf("%d\n", result);
    return 0;
}