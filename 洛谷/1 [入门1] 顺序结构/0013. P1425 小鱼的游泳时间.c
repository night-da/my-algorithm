#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int e, f;

    f = d - b;
    e = c - a;

    if (f < 0) {
        f += 60;
        e--;
    }

    printf("%d %d\n", e, f);

    return 0;
}