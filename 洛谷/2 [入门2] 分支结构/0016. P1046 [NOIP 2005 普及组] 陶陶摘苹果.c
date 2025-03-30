#include <stdio.h>

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int h;
    scanf("%d", &h);
    h += 30;

    int n = 0;

    for (int i = 0; i < 10; i++) {
        if (h >= arr[i]) {
            n++;
        }
    }

    printf("%d\n", n);

    return 0;
}