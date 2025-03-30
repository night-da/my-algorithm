/*
 * @lc app=leetcode.cn id=58 lang=c
 *
 * [58] 最后一个单词的长度
 */

#include <string.h>

// @lc code=start
int lengthOfLastWord(char* s) {
    int len = strlen(s);
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            continue;
        }

        int j = i - 1;
        while (j >= 0 && s[j] != ' ') {
            j--;
        }

        return i - j;
    }

    return 0;
}
// @lc code=end

