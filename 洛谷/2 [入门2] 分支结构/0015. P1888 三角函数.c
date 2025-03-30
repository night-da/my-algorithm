#include <stdio.h>

int Gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int arr[] = {a, b, c};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    a = arr[0], b = arr[1], c = arr[2];

    int gcd = Gcd(c, a);

    a /= gcd, c /= gcd;

    printf("%d/%d\n", a, c);

    return 0;
}