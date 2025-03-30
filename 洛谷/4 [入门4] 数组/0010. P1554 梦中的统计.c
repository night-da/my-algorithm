#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int arr[10] = {0};

    for (int i = m; i <= n; i++) {
        int num = i;
        while (num != 0) {
            int temp = num % 10;
            num /= 10;
            arr[temp]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}