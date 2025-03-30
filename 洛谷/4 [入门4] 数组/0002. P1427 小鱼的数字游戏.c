#include <stdio.h>

int main() {
    int arr[100];

    int a;
    int n = 0;

    while (1) {
        scanf("%d", &a);
        if (a == 0) {
            break;
        }
        arr[n] = a;
        n++;
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}