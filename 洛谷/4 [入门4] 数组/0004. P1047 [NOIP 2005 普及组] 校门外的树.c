#include <stdio.h>
#include <stdlib.h>

int main() {
    int l, m;
    scanf("%d %d", &l, &m);

    int* arr = malloc((l + 1) * sizeof(int));
    if (!arr) return 1;
    for (int i = 0; i < l + 1; i++) {
        arr[i] = 1;
    }

    int u, v;

    for (int i = 0; i < m; i++) {
        scanf("%d %d", &u, &v);
        for (int j = u; j <= v; j++) {
            arr[j] = 0;
        }
    }

    int total = 0;

    for (int i = 0; i < l + 1; i++) {
        total += arr[i];
    }

    printf("%d\n", total);

    free(arr);

    return 0;
}