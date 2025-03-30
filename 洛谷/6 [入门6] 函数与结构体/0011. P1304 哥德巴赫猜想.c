#include <stdio.h>
#include <stdbool.h>

bool prime(int a) {
    if (a < 2) {
        return 0;
    }
    bool flag = 1;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            flag = 0;
        }
    }
    return flag;
} 

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 4; i <= N; i += 2) {
        for (int j = 2; j <= i / 2; j++) {
            if (prime(j) && prime(i - j)) {
                printf("%d=%d+%d\n", i, j, i - j);
                break;
            }
        }
    }

    return 0;
}