#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(n * n * sizeof(int));

    int t = 0, b = n - 1, l = 0, r = n - 1;
    int num = 1;

    while (t <= b && l <= r) {
        for (int i = l; i <= r; i++) {
            arr[t + n * i] = num++;
        }
        t++;
        for (int i = t; i <= b; i++) {
            arr[i + n * r] = num++;
        }
        r--;
        if (t <= b && l <= r) {
            for (int i = r; i >= l; i--) {
                arr[b + n * i] = num++;
            }
            b--;
            for (int i = b; i >= t; i--) {
                arr[i + n * l] = num++;
            }
            l++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", arr[i + n * j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}