#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int min;
    scanf("%d", &min);

    int max = min;

    int total = min;

    int a;
    int count = 1;

    for (int i = 1; i < n; i++) {
        scanf("%d", &a);
        total += a;
        count++;
        if (a < min) {
            min = a;
        }
        if (a > max) {
            max = a;
        }
    }

    total = total - min - max;

    printf("%.2f\n", (float)(total) / (count - 2));

    return 0;
}