#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int sum1 = 0, sum2 = 0;
    int num1 = 0, num2 = 0;

    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            sum1 += i;
            num1++;
        }
        else {
            sum2 += i;
            num2++;
        }
    }

    printf("%.1f %.1f\n", (float)(sum1) / num1, (float)(sum2) / num2);

    return 0;
}