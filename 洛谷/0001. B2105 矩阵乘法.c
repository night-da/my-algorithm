#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int** A = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        A[i] = (int*)malloc(m * sizeof(int));
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int** B = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        B[i] = (int*)malloc(k * sizeof(int));
        for (int j = 0; j < k; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int** C = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        C[i] = (int*)malloc(k * sizeof(int));
        for (int j = 0; j < k; j++) {
            C[i][j] = 0;
            for (int l = 0; l < m; l++) {
                C[i][j] += A[i][l] * B[l][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}