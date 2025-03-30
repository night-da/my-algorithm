/*
 * @lc app=leetcode.cn id=28 lang=c
 *
 * [28] 找出字符串中第一个匹配项的下标
 */

#include <string.h>
#include <stdbool.h>

// @lc code=start
int strStr(char* haystack, char* needle) {
    int n = strlen(haystack);
    int m = strlen(needle);

    for (int i = 0; i + m <= n; i++) {
        bool flag = 1;

        for (int j = 0; j < m; j++) {
            if (haystack[i + j] != needle[j]) {
                flag = 0;
                break;
            }
        }

        if (flag) {
            return i;
        }
    }

    return -1;
}
// @lc code=end

