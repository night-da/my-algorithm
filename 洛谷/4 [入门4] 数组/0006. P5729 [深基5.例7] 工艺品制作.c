#include <stdio.h>

int main() {
    int arr[20][20][20];

    int w, x, h;
    scanf("%d %d %d", &w, &x, &h);
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= x; j++) {
            for (int k = 1; k <= h; k++) {
                arr[i][j][k] = 1;
            }
        }
    }

    int q;
    scanf("%d", &q);

    int x1, y1, z1, x2, y2, z2;

    for (int i = 0; i < q; i++) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
        for (int j = x1; j <= x2; j++) {
            for (int k = y1; k <= y2; k++) {
                for (int l = z1; l <= z2; l++) {
                    arr[j][k][l] = 0;
                }
            }
        }
    }

    int total = 0;

    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= x; j++) {
            for (int k = 1; k <= h; k++) {
                total += arr[i][j][k];
            }
        }
    }

    printf("%d", total);

    return 0;
}