/*
 * @lc app=leetcode.cn id=1160 lang=c
 *
 * [1160] 拼写单词
 */

#include <string.h>

// @lc code=start
int countCharacters(char** words, int wordsSize, char* chars) {
    int hash[26] = {0};
    for (int i = 0; i < strlen(chars); i++) {
        hash[chars[i] - 'a']++;
    }

    int count = 0;
    int hash_temp[26];

    for (int i = 0; i < wordsSize; i++) {
        for (int j = 0; j < 26; j++) {
            hash_temp[j] = hash[j];
        }

        for (int j = 0; j < strlen(words[i]); j++) {
            hash_temp[words[i][j] - 'a']--;
        }

        int flag = 1;

        for (int j = 0; j < 26; j++) {
            if (hash_temp[j] < 0) {
                flag = 0;
            }
        }

        if (flag) {
            count += strlen(words[i]);
        }
    }

    return count;
}
// @lc code=end

