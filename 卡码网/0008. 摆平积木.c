#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    while (scanf("%d", &n) == 1) {
        if (n == 0) {
            break;
        }

        int total = 0;

        int* arr = malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            total += arr[i];
        }

        int ave = total / n;
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > ave) {
                res += (arr[i] - ave);
            }
        }

        printf("%d\n\n", res);
        free(arr);
    }

    return 0;
}