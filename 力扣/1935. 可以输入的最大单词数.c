/*
 * @lc app=leetcode.cn id=1935 lang=c
 *
 * [1935] 可以输入的最大单词数
 */

#include <string.h>

// @lc code=start
int canBeTypedWords(char* text, char* brokenLetters) {
    int total = 1, a = 0;

    int flag = 1;

    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == ' ') {
            flag = 1;
            total++;
        }
        else {
            if (flag == 1) {
                for (int j = 0; j < strlen(brokenLetters); j++) {
                    if (text[i] == brokenLetters[j]) {
                        flag = 0;
                        a++;
                    }
                }
            }
        }
    }

    return total - a;
}
// @lc code=end

