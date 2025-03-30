/*
 * @lc app=leetcode.cn id=389 lang=c
 *
 * [389] 找不同
 */

#include <string.h>

// @lc code=start
char findTheDifference(char* s, char* t) {
    int len = strlen(s);
    int hash[26] = {0};

    for (int i = 0; i < strlen(s); i++) {
        hash[s[i] - 'a']++;
    }
    for (int i = 0; i < strlen(s) + 1; i++) {
        hash[t[i] - 'a']--;
    }

    char res;
    for (int i = 0; i < 26; i++) {
        if (hash[i] != 0) {
            res = i + 'a';
        }
    }

    return res;
}
// @lc code=end

