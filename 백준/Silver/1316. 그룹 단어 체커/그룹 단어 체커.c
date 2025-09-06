#include <stdio.h>
#include <string.h>
int is_group_word(char *word) {
    int alphabet[26] = {0};
    int i;
    int prev = 0;
    for (i = 0; i < strlen(word); i++) {
        int now = word[i];
        if (prev != now) {
            if (alphabet[now - 'a'] == 1) {
                return 0;
            }
            alphabet[now - 'a'] = 1;
        }
        prev = now;
    }
    return 1;
}
int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    char word[101];
    for (int i = 0; i < n; i++) {
        scanf("%s", word);
        if (is_group_word(word)) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
