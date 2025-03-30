#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int x;
    int k;

    for (int i = 100; i >= 1; i--) {
        x = i;
        k = (n - 7 * 52 * x) / (52 * 6 * (1 + 6) / 2);
        if (((n - 7 * 52 * x) % (52 * 6 * (1 + 6) / 2) == 0) && k > 0) {
            break;
        }
    }

    printf("%d\n", x);
    printf("%d\n", k);

    return 0;
}