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
    int n;
    scanf("%d", &n);

    for (int i = 2; i * i <= n; i++) {
        if (prime(i) && n % i == 0 && prime(n / i)) {
            printf("%d\n", n / i);
            break;
        }
    }

    return 0;
}