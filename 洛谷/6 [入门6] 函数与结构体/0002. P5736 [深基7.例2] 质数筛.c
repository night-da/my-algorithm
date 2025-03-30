#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool Prime(int a) {
    if (a < 2) {
        return 0;
    }

    bool flag = 1;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            flag = 0;
        }
    }
    
    return flag;
}

int main() {
    int n;
    scanf("%d", &n);

    int* arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (Prime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}