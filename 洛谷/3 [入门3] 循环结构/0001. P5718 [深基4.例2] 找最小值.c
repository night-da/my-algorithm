#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int min;
    scanf("%d", &min);

    int a;

    for (int i = 1; i < n; i++) {
        scanf("%d", &a);
        if (a < min) {
            min = a;
        }
    }

    printf("%d\n", min);

    return 0;
}