#include <stdio.h>

int main() {
    int x, n;
    scanf("%d %d", &x, &n);

    int score = 0;

    while (n > 0) {
        if (x == 7) {
            x -= 6;
        }
        else {
            if (x != 6) {
                score++;
            }
            x++;
        }
        n--;
    }

    score *= 250;

    printf("%d\n", score);

    return 0;
}