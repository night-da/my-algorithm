#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    float money = a + (float)(b) / 10;

    int n = floor(money / 1.9);

    printf("%d\n", n);

    return 0;
}