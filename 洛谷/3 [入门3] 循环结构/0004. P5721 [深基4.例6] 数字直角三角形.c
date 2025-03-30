#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num = 1;

    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            printf("%02d", num);
            num++;
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}