#include <stdio.h>
#include <string.h>

int main() {
    char ch[1001];
    scanf("%s", ch);

    int len = strlen(ch);

    int a[1000] = {0};
    for (int i = 0; i < len; i++) {
        a[i] = ch[i] - '0';
    }

    int b;
    scanf("%d", &b);

    int c[1000] = {0};

    int t = 0;
    for (int i = 0; i < len; i++) {
        t = t * 10 + a[i];
        if (t >= b) {
            c[i] = t / b;
            t %= b;
        }
        else {
            c[i] = 0;
        }
    }

    int idx = 0;
    for (int i = 0; i < len; i++) {
        if (c[i] != 0) {
            idx = i;
            break;
        }
    }
    for (int i = idx; i < len; i++) {
        printf("%d", c[i]);
    }
    printf("......%d\n", t);

    return 0;
}