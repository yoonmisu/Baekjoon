#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10000

int stack[MAX];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    if (top == -1) return -1;
    return stack[top--];
}

int size() {
    return top + 1;
}

int empty() {
    return (top == -1) ? 1 : 0;
}

int peek() {
    if (top == -1) return -1;
    return stack[top];
}

int main() {
    int n;
    scanf("%d", &n);

    char command[10];
    int value;

    for (int i = 0; i < n; i++) {
        scanf("%s", command);

        if (strcmp(command, "push") == 0) {
            scanf("%d", &value);
            push(value);
        } else if (strcmp(command, "pop") == 0) {
            printf("%d\n", pop());
        } else if (strcmp(command, "size") == 0) {
            printf("%d\n", size());
        } else if (strcmp(command, "empty") == 0) {
            printf("%d\n", empty());
        } else if (strcmp(command, "top") == 0) {
            printf("%d\n", peek());
        }
    }

    return 0;
}