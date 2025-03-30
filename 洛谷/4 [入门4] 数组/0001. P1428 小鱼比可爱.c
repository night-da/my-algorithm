#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int* arr1 = malloc(n * sizeof(int));
    if (!arr1) return 1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    int* arr2 = malloc(n * sizeof(int));
    if (!arr2) return 1;
    for (int i = 0; i < n; i++) {
        arr2[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr1[j] < arr1[i]) {
                arr2[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    free(arr1), free(arr2);

    return 0;
}