#include <stdio.h>
#include <string.h>

#define MAX 10000

int main() {
    int queue[MAX];
    int front = 0;
    int back = 0;
    int n;
    char str[10];
    int x;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", str);

        if (strcmp(str, "push") == 0) {
            scanf("%d", &x);
            queue[back++] = x;
        } 
        else if (strcmp(str, "pop") == 0) {
            if (front == back) {
                printf("-1\n");
            } else {
                printf("%d\n", queue[front++]);
            }
        } 
        else if (strcmp(str, "size") == 0) {
            printf("%d\n", back - front);
        } 
        else if (strcmp(str, "empty") == 0) {
            printf("%d\n", front == back ? 1 : 0);
        } 
        else if (strcmp(str, "front") == 0) {
            if (front == back) {
                printf("-1\n");
            } else {
                printf("%d\n", queue[front]);
            }
        } 
        else if (strcmp(str, "back") == 0) {
            if (front == back) {
                printf("-1\n");
            } else {
                printf("%d\n", queue[back - 1]);
            }
        }
    }
}
