#include <stdio.h>

int main() {
    int l;
    scanf("%d", &l);

    int n = 2;
    int sum = 0;

    int count = 0;

    while (sum + n <= l) {
        int flag = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                flag = 0;
            }
        }

        if (flag == 1) {
            sum += n;
            printf("%d\n", n);
            count++;
        }
        n++;
    }

    printf("%d\n", count);

    return 0;
}