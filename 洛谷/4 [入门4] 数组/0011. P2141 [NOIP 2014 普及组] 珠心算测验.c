#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int* arr = malloc(n * sizeof(int));
    int* res = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        res[i] = arr[i];
    }

    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (arr[i] + arr[j] == res[k]) {
                    count++;
                    res[k] = 0;
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}