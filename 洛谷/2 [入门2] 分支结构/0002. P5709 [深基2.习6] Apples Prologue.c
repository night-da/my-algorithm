#include <stdio.h>
#include <math.h>

int main() {
    int m, t, s;
    scanf("%d %d %d", &m, &t, &s);

    int n = m - ((ceil)((float)(s) / t));

    if (t == 0) {
        printf("0\n");
    }
    else {
        if (n < 0) {
            printf("0\n");
        }
        else {
            printf("%d\n", n);
        }
    }

    return 0;
}