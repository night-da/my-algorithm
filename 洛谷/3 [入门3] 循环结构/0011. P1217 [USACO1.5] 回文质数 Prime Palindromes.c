#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a % 2 == 0) {
        a++;
    }

    int n;

    for (int i = a; i <= b; i += 2) {
        n = i;

        int arr[9];
        int j = 0;

        while (n > 0) {
            arr[j] = n % 10;
            j++;
            n /= 10;
        }

        int flag1 = 1;

        for (int k = 0; k < j / 2; k++) {
            if (arr[k] != arr[j - 1 - k]) {
                flag1 = 0;
            }
        }

        if ((flag1 == 1 && j % 2 != 0) || i == 11) {
            int flag2 = 1;
            for (int k = 2; k * k <= i; k++) {
                if (i % k == 0) {
                    flag2 = 0;
                }
            }
            if (flag2 == 1) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}