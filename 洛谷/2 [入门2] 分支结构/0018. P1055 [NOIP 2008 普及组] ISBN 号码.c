#include <stdio.h>

int main() {
    char isbn[14];
    scanf("%s", isbn);

    int r = ((isbn[0] - '0') * 1 + (isbn[2] - '0') * 2 + (isbn[3] - '0') * 3 + (isbn[4] - '0') * 4 + (isbn[6] - '0') * 5 + (isbn[7] - '0') * 6 + (isbn[8] - '0') * 7 + (isbn[9] - '0') * 8 + (isbn[10] - '0') * 9) % 11;

    char remain;

    if (r == 10) {
        remain = 'X';
    }
    else {
        remain = r + '0';
    }

    if (isbn[12] == remain) {
        printf("Right\n");
    }
    else {
        isbn[12] = remain;
        printf("%s\n", isbn);
    }

    return 0;
}