/*
 * @lc app=leetcode.cn id=2716 lang=c
 *
 * [2716] 最小化字符串长度
 */

#include <string.h>

// @lc code=start
int minimizedStringLength(char* s) {
    int hash[26] = {0};
    int len = strlen(s);
    for (int i = 0; i < strlen(s); i++) {
        hash[s[i] - 'a'] = 1;
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (hash[i] != 0) {
            count++;
        }
    }

    return count;
}
// @lc code=end

