#include <stdio.h>

int main() {
    float s;
    scanf("%f", &s);

    float step = 2;
    float total = 0;

    int n = 0;

    while (total < s) {
        total += step;
        step *= 0.98;
        n++;
    }

    printf("%d\n", n);

    return 0;
}