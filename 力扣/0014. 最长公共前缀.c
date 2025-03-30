/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

#include <string.h>

// @lc code=start
char* longestCommonPrefix(char** strs, int strsSize) {
    for (int i = 0; i < strlen(strs[0]); i++) {
        for (int j = 1; j < strsSize; j++) {
            if (strs[0][i] != strs[j][i]) {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}
// @lc code=end

