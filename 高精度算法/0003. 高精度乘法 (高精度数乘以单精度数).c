#include <stdio.h>
#include <string.h>

void reverse(char* s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}

int main() {
    char ch[1001];
    scanf("%s", ch);

    int len = strlen(ch);
    reverse(ch);

    int a[1000] = {0};
    for (int i = 0; i < len; i++) {
        a[i] = ch[i] - '0';
    }

    int b;
    scanf("%d", &b);

    for (int i = 0; i < len; i++) {
        a[i] *= b;
    }

    for (int i = 0; i < len + 4; i++) {
        if (a[i] >= 10) {
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
        }
    }

    int idx = 0;
    for (int i = len + 3; i >= 0; i--) {
        if (a[i] != 0) {
            idx = i;
            break;
        }
    }
    for (int i = idx; i >= 0; i--) {
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}