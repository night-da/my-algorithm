#include <stdio.h>
#include <math.h>

#define PI 3.141593

int main() {
    int n;
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("I love Luogu!\n");
            break;

        case 2:
            printf("%d %d\n", 2 + 4, 10 - 2 - 4);
            break;

        case 3:
            printf("%d\n", 14 / 4);
            printf("%d\n", 4 * (14 / 4));
            printf("%d\n", 14 % 4);
            break;

        case 4:
            printf("%.6g\n", 500.0 / 3);
            break;

        case 5:
            printf("%d\n", (260 + 220) / (12 + 20));
            break;

        case 6:
            printf("%.6g\n", sqrt(pow(6, 2) + pow(9, 2)));
            break;

        case 7:
            printf("%d\n", 100 + 10);
            printf("%d\n", 100 + 10 - 20);
            printf("0\n");
            break;

        case 8:
            printf("%.6g\n", 2 * PI * 5);
            printf("%.6g\n", PI * pow(5, 2));
            printf("%.6g\n", 4.0 / 3 * PI * pow(5, 3));
            break;

        case 9:
            printf("%d\n", 22);
            break;

        case 10:
            printf("%d\n", 9);
            break;

        case 11:
            printf("%.6g\n", 100.0 / (8 - 5));
            break;

        case 12:
            printf("%d\n", (int)('M' - 'A') + 1);
            printf("%c\n", (char)('A' + 18 - 1));
            break;

        case 13:
            printf("%d\n", (int)(cbrt(4.0 / 3 * PI * (pow(4, 3) + pow(10, 3)))));
            break;

        case 14:
            printf("%d\n", 110 - (int)((100 + sqrt(pow(100, 2) - 4 * 2400)) / 2));
            break;

        default:
            break;
    }

    return 0;
}