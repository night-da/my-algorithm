#include <stdio.h>

int main() {
    int M, K;
    while (scanf("%d %d", &M, &K) == 2) {
        if (M == 0 && K == 0) {
            break;
        }

        int total = M;
        int r;

        while (M >= K) {
            r = M % K;
            M /= K;
            total += M;
            M += r;
        }

        printf("%d\n", total);
    }

    return 0;
}