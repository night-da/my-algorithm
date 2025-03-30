#include <stdio.h>
#include <string.h>

int main() {
    char ch[101];
    while (fgets(ch, sizeof(ch), stdin)) {
        float total = 0;
        int count = 0;
        int flag = 1;

        for (unsigned int i = 0; i < strlen(ch); i++) {
            if (ch[i] == 'A') {
                total += 4;
                count++;
            }
            else if (ch[i] == 'B') {
                total += 3;
                count++;
            }
            else if (ch[i] == 'C') {
                total += 2;
                count++;
            }
            else if (ch[i] == 'D') {
                total++;
                count++;
            }
            else if (ch[i] == 'F') {
                count++;
            }
            else if (ch[i] == ' ' || ch[i] == '\n') {
                continue;
            }
            else {
                flag = 0;
                printf("Unknown\n");
                break;
            }
        }

        if (flag == 1) {
            printf("%.2f\n", total / count);
        }
    }

    return 0;
}