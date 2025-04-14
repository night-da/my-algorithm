#include <stdio.h>

int main() {
    int N;
    while (scanf("%d", &N) == 1) {
        while (N--) {
            int n;
            scanf("%d", &n);

            int total = 0;
            for (int i = 0; i < n; i++) {
                int a;
                scanf("%d", &a);
                total += a;
            }
            printf("%d\n", total);
            
            if (N > 0) {
                printf("\n");
            }
        }
    }

    return 0;
}