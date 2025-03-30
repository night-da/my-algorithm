#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char ch[101];
    scanf("%s", ch);

    for (unsigned int i = 0; i < strlen(ch); i++) {
        ch[i] = toupper(ch[i]);
    }

    printf("%s\n", ch);

    return 0;
}