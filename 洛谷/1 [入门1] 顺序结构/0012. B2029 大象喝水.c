#include <stdio.h>
#include <math.h>

#define PI 3.14
#define TOTAL 20000

int main() {
    float h, r;
    scanf("%f %f", &h, &r);

    float v = PI * pow(r, 2) * h;
    int n = ceil(TOTAL / v);

    printf("%d\n", n);

    return 0;
}