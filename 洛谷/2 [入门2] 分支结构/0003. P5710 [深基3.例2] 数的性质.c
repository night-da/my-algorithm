#include <stdio.h>
#include <stdbool.h>

int main() {
    int x;
    scanf("%d", &x);

    bool flag1 = (x % 2 == 0);
    bool flag2 = (x > 4 && x <= 12);

    int a = 0, b = 0, c = 0, d = 0;
    if (flag1 && flag2) {
        a = 1;
    }
    if (flag1 || flag2) {
        b = 1;
    }
    if (flag1 ^ flag2) {
        c = 1;
    }
    if (!flag1 && !flag2) {
        d = 1;
    }

    printf("%d %d %d %d\n", a, b, c, d);

    return 0;
}