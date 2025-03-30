#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int* arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX;
    for (int i = 0; i < n - m + 1; i++) {
        int total = 0;
        for (int j = i; j < i + m; j++) {
            total += arr[j];
        }
        if (total < min) {
            min = total;
        }
    }

    printf("%d\n", min);

    return 0;
}