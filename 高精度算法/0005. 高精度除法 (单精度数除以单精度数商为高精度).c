#include <stdio.h>

int main() {
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);

    printf("%d.", a / b);

    int t = a % b;
    for (int i = 0; i < n; i++) {
        t *= 10;
        printf("%d", t / b);
        t %= b;
    }

    return 0;
}