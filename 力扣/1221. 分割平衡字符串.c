/*
 * @lc app=leetcode.cn id=1221 lang=c
 *
 * [1221] 分割平衡字符串
 */

#include <string.h>

// @lc code=start
int balancedStringSplit(char* s) {
    int a = 0, count = 0;
    
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 'L') {
            count++;
        }
        else {
            count--;
        }

        if (count == 0) {
            a++;
        }
    }

    return a;
}
// @lc code=end

