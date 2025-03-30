#include <stdio.h>

int main() {
    int a, b;

    int d, max = 8;

    for (int i = 0; i < 7; i++) {
        scanf("%d %d", &a, &b);
        if (a + b > max) {
            max = a + b;
            d = i + 1;
        }
    }

    if (max == 8) {
        printf("0\n");
    }
    else {
        printf("%d\n", d);
    }

    return 0;
}