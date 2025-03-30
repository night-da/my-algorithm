/*
 * @lc app=leetcode.cn id=125 lang=c
 *
 * [125] 验证回文串
 */

#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// @lc code=start
bool isPalindrome(char* s) {
    char arr[strlen(s) + 1];
    int len = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (isalnum(s[i])) {
            arr[len] = tolower(s[i]);
            len++;
        }
    }

    for (int i = 0; i < len / 2; i++) {
        if (arr[i] != arr[len - i - 1]) {
            return false;
        }
    }

    return true;
}
// @lc code=end

