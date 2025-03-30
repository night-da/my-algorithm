#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);

    int coin = 1;
    int total = 0;

    int count = 0;
    int sum = 1;

    for (int i = 1; i <= k; i++) {
        total += coin;
        count++;
        if (count == sum) {
            coin++;
            count = 0;
            sum++;
        }
    }

    printf("%d\n", total);

    return 0;
}