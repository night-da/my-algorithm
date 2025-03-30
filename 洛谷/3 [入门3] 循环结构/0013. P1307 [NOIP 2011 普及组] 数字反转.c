#include <stdio.h>
#include <stdlib.h>

int Reverse(int n) {
    int reversed = 0;
    int temp = n;
    while (temp != 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    return reversed;
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("-");
        n = abs(n);
    }

    n = Reverse(n);

    printf("%d\n", n);

    return 0;
}