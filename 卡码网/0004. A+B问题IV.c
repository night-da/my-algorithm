#include <stdio.h>

int main() {
    int N;
    while (scanf("%d", &N) == 1) {
        if (N == 0) {
            break;
        }

        int arr[N];
        int total = 0;
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
            total += arr[i];
        }
        printf("%d\n", total);
    }

    return 0;
}