#include <stdio.h>
#include <string.h>
#include <math.h>

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

    int a[1000], b[1000], c[1000] = {0};
    for (int i = 0; i < len_1; i++) {
        a[i] = ch_1[i] - '0';
    }     
    for (int i = 0; i < len_2; i++) {
        b[i] = ch_2[i] - '0';
    }

    int len = fmax(len_1, len_2);
    for (int i = 0; i < len; i++) {
        c[i] = a[i] + b[i];
    }
    for (int i = 0; i < len; i++) {
        if (c[i] >= 10) {
            c[i + 1] += c[i] / 10;
            c[i] %= 10;
        }
    }

    if (c[len] != 0) {
        len++;
    }
    for (int i = len - 1; i >= 0; i--) {
        printf("%d", c[i]);
    }
    printf("\n");

    return 0;
}