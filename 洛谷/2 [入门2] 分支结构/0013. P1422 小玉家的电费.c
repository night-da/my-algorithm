#include <stdio.h>

int main() {
    int total;
    scanf("%d", &total);

    float money;

    if (total <= 150) {
        money = total * 0.4463;
    }
    else if (total <= 400) {
        money = 150 * 0.4463 + (total - 150) * 0.4663;
    }
    else {
        money = 150 * 0.4463 + (400 - 150) * 0.4663 + (total - 400) * 0.5663;
    }

    printf("%.1f\n", money);

    return 0;
}