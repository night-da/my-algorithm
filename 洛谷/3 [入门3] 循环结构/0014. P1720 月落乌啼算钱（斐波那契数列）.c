#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    double Fn = (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5);

    printf("%.2lf\n", Fn);

    return 0;
}