#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a;
    int b;

    int count = 1;

    int max = 1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (i != 0) {
            if (a == b) {
                count++;
                if (count > max) {
                    max = count;
                }
            }
            else {
                count = 1;
            }
        }
        b = a + 1;
    }

    printf("%d\n", max);

    return 0;
}