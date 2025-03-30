#include <stdio.h>
#include <string.h>

int main() {
    char ch[6];
    fgets(ch, sizeof(ch), stdin);

    int count = 0;
    for (unsigned int i = 0; i < strlen(ch); i++) {
        if (ch[i] >= 'A' && ch[i] <= 'Z') {
            count++;
        }
        if (ch[i] >= 'a' && ch[i] <= 'z') {
            count++;
        }
        if (ch[i] >= '0' && ch[i] <= '9') {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}