/*
 * @lc app=leetcode.cn id=2351 lang=c
 *
 * [2351] 第一个出现两次的字母
 */

#include <string.h>

// @lc code=start
char repeatedCharacter(char* s) {
    int hash[26] = {0};

    int i;

    for (i = 0; i < strlen(s); i++) {
        hash[s[i] - 'a']++;
        if (hash[s[i] - 'a'] == 2) {
            break;
        }
    }

    return s[i];
}
// @lc code=end

