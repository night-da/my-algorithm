#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int* arr = (int*)malloc(m * sizeof(int));

    float res = 0;
    for (int i = 0; i < n; i++) {
        memset(arr, 0, m * sizeof(int));
        float total = 0;
        float score = 0;

        int max = -1;
        int min = INT_MAX; 
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[j]);
            total += arr[j];

            if (arr[j] > max) {
                max = arr[j];
            }
            if (arr[j] < min) {
                min = arr[j];
            }

            score = (total - max - min) / (m - 2);
            if (score > res) {
                res = score;
            }
        }
    }

    printf("%.2f\n", res);
    free(arr);

    return 0;
}