#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int* arr = malloc(n * 4 * sizeof(int));
    if (!arr) return 1;

    int a;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a);
            arr[i * 4 + j] = a;
        }
    }

    for (int i = 0; i < n; i++) {
        arr[i * 4 + 3] = arr[i * 4] + arr[i * 4 + 1] + arr[i * 4 + 2];
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((abs(arr[i * 4] - arr[j * 4]) <= 5) && (abs(arr[i * 4 + 1] - arr[j * 4 + 1]) <= 5) && (abs(arr[i * 4 + 2] - arr[j * 4 + 2]) <= 5) && (abs(arr[i * 4 + 3] - arr[j * 4 + 3]) <= 10)) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    free(arr);

    return 0;
}