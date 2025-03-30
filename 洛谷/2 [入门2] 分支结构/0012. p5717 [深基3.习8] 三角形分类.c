#include <stdio.h>
#include <math.h>

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

    if (a + b <= c) {
        printf("Not triangle\n");
    }
    else {
        if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
            printf("Right triangle\n");
        }
        if (pow(a, 2) + pow(b, 2) > pow(c, 2)) {
            printf("Acute triangle\n");
        }
        if (pow(a, 2) + pow(b, 2) < pow(c, 2)) {
            printf("Obtuse triangle\n");
        }
        if (a == b) {
            printf("Isosceles triangle\n");
        }
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        }
    }

    return 0;
}