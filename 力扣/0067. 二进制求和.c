/*
 * @lc app=leetcode.cn id=67 lang=c
 *
 * [67] 二进制求和
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

char* addBinary(char* a, char* b) {
    reverse(a);
    reverse(b);

    int len_a = strlen(a);
    int len_b = strlen(b);

    int len_ans = fmax(len_a, len_b) + 2;
    int carry = 0;
    int idx = 0;
    char* ans = malloc(len_ans * sizeof(char));

    for (int i = 0; i < len_ans - 2; i++) {
        carry += (i < len_a ? (a[i] - '0') : 0);
        carry += (i < len_b ? (b[i] - '0') : 0);
        ans[idx++] = carry % 2 + '0';
        carry /= 2;
    }

    if (carry) {
        ans[idx++] = '1';
    }

    ans[idx] = '\0';
    reverse(ans);

    return ans;
}
// @lc code=end

