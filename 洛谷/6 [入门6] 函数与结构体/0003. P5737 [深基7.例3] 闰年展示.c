#include <stdio.h>
#include <stdbool.h>

bool leapyear(int a) {
    bool flag = (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0);
    return flag;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int count = 0;
    for (int i = x; i <= y; i++) {
        if (leapyear(i)) {
            count++;
        }
    }
    printf("%d\n", count);

    for (int i = x; i <= y; i++) {
        if (leapyear(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}