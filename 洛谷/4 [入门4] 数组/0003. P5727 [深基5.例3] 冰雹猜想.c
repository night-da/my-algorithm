#include <stdio.h>

int main() {
    int arr[1000];

    int n;
    scanf("%d", &n);

    int count = 0;
    arr[count] = n;
    
    while (n != 1) {
        if (n % 2 != 0) {
            n = 3 * n + 1;
        }
        else {
            n /= 2;
        }
        count++;
        arr[count] = n;
    }

    for (int i = count; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}