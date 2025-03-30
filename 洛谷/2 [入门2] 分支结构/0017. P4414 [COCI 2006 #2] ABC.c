#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int arr1[] = {a, b, c};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (arr1[j] > arr1[j + 1]) {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }

    char arr2[4];
    scanf("%s", arr2);

    for (int i = 0; i < 3; i++) {
        if (arr2[i] == 'A') {
            printf("%d ", arr1[0]);
            continue;
        }
        if (arr2[i] == 'B') {
            printf("%d ", arr1[1]);
            continue;
        }
        if (arr2[i] == 'C') {
            printf("%d ", arr1[2]);
            continue;
        }
    }
    printf("\n");

    return 0;
}