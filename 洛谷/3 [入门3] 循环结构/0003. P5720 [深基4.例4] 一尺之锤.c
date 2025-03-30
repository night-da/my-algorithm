#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int n = 1;

    while (a != 1) {
        a /= 2;
        n++;
    }

    printf("%d\n", n);

    return 0;
}