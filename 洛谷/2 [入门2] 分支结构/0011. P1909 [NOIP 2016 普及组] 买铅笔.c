#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int a1, a2, b1, b2, c1, c2;
    scanf("%d %d %d %d %d %d", &a1, &a2, &b1, &b2, &c1, &c2);

    int a = ceil((float)(n) / a1) * a2;
    int b = ceil((float)(n) / b1) * b2;
    int c = ceil((float)(n) / c1) * c2;

    int arr[] = {a, b, c};
    int min = arr[0];

    for (int i = 1; i < 3; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d\n", min);

    return 0;
}