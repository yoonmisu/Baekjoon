#include <stdio.h>
#define MAX 999
int board[MAX][MAX];
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int x = n / 2;
    int y = n / 2;
    int num = 1;
    int step = 1;
    int target_x = -1, target_y = -1;
    board[x][y] = num; 
    if (num == m) { target_x = x; target_y = y; }
    while (num < n * n) {
        for (int i = 0; i < step && num < n * n; i++) {
            x -= 1;
            num++;
            board[x][y] = num;
            if (num == m) { target_x = x; target_y = y; }
        }
        for (int i = 0; i < step && num < n * n; i++) {
            y += 1;
            num++;
            board[x][y] = num;
            if (num == m) { target_x = x; target_y = y; }
        }
        step++;
        for (int i = 0; i < step && num < n * n; i++) {
            x += 1;
            num++;
            board[x][y] = num;
            if (num == m) { target_x = x; target_y = y; }
        }
        for (int i = 0; i < step && num < n * n; i++) {
            y -= 1;
            num++;
            board[x][y] = num;
            if (num == m) { target_x = x; target_y = y; }
        }
        step++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    printf("%d %d\n", target_x + 1, target_y + 1);

    return 0;
}
