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
    char ch_1[1001], ch_2[1001];
    scanf("%s", ch_1);
    scanf("%s", ch_2);

    reverse(ch_1);
    reverse(ch_2);

    int len_1 = strlen(ch_1);
    int len_2 = strlen(ch_2);

    int a[1000], b[1000], c[2000] = {0};
    for (int i = 0; i < len_1; i++) {
        a[i] = ch_1[i] - '0';
    }
    for (int i = 0; i < len_2; i++) {
        b[i] = ch_2[i] - '0';
    }

    for (int i = 0; i < len_2; i++) {
        for (int j = 0; j < len_1; j++) {
            c[j + i] += a[j] * b[i];
            if (c[j + i] >= 10) {
                c[j + i + 1] += c[j + i] / 10;
                c[j + i] %= 10;
            }
        }
    }

    int idx = 0;
    for (int i = len_1 + len_2 - 1; i >= 0; i--) {
        if (c[i] != 0) {
            idx = i;
            break;
        }
    }
    for (int i = idx; i >= 0; i--) {
        printf("%d", c[i]);
    }
    printf("\n");

    return 0;
}