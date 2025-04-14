#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>

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
    char ch[101];
    scanf("%s", ch);

    int hash[26] = {0};
    for (unsigned int i = 0; i < strlen(ch); i++) {
        hash[ch[i] - 'a']++;
    }

    int maxn = 0, minn = INT_MAX;
    for (int i = 0; i < 26; i++) {
        if (hash[i] > maxn) {
            maxn = hash[i];
        }
        if (hash[i] < minn && hash[i] != 0) {
            minn = hash[i];
        }
    }

    int ans = maxn - minn;
    if (prime(ans)) {
        printf("Lucky Word\n");
        printf("%d\n", ans);
    }
    else {
        printf("No Answer\n");
        printf("0\n", ans);
    }

    return 0;
}