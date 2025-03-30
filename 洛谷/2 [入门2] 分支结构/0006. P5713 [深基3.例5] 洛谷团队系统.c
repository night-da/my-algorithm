#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int local = 5 * n;
    int luogu = 11 + 3 * n;

    if (local <= luogu) {
        printf("Local\n");
    }
    else {
        printf("Luogu\n");
    }

    return 0;
}