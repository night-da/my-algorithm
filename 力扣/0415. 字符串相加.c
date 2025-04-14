/*
 * @lc app=leetcode.cn id=415 lang=c
 *
 * [415] 字符串相加
 */

#include <string.h>
#include <math.h>

// @lc code=start
void reverse(char* s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}

char* addStrings(char* num1, char* num2) {
    reverse(num1);
    reverse(num2);

    int len_1 = strlen(num1);
    int len_2 = strlen(num2);

    int a[10000] = {0}, b[10000] = {0}, c[10000] = {0};
    for (int i = 0; i < len_1; i++) {
        a[i] = num1[i] - '0';
    }
    for (int i = 0; i < len_2; i++) {
        b[i] = num2[i] - '0';
    }

    int len = fmax(len_1, len_2);
    for (int i = 0; i < len; i++) {
        c[i] = a[i] + b[i];
    }
    for (int i = 0; i < len; i++) {
        if (c[i] >= 10) {
            c[i + 1] += c[i] / 10;
            c[i] %= 10;
        }
    }

    if (c[len] != 0) {
        len++;
    }

    char* res = malloc((len + 1) * sizeof(char));
    for (int i = len - 1; i >= 0; i--) {
        res[len - 1 - i] = c[i] + '0';
    }
    res[len] = '\0';

    return res;
}
// @lc code=end

