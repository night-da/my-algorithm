#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%02d", count);
            count++;
        }
        printf("\n");
    }
    printf("\n");

    count = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        for (int k = 0; k < i + 1; k++) {
            printf("%02d", count);
            count++;
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}