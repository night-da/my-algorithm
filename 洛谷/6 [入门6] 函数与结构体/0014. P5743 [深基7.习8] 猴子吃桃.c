#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int res = 1;
    for (int i = 0; i < n - 1; i++) {
        res = (res + 1) * 2;
    }

    printf("%d\n", res);

    return 0;
}