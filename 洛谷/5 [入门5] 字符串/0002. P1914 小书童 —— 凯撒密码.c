#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char ch[51];
    scanf("%s", ch);

    for (unsigned int i = 0; i < strlen(ch); i++) {
        ch[i] = 'a' + (ch[i] + n - 'a') % 26;
    }

    printf("%s", ch);

    return 0;
}