/*
 * @lc app=leetcode.cn id=13 lang=c
 *
 * [13] 罗马数字转整数
 */

#include <string.h>

// @lc code=start
int romanToInt(char* s) {
    int num = 0;

    for (int i = 0; i < strlen(s); ) {
        if (s[i] == 'C' && s[i + 1] == 'M') {
            num += 900;
            i += 2;
        }
        else if (s[i] == 'C' && s[i + 1] == 'D') {
            num += 400;
            i += 2;
        }
        else if (s[i] == 'X' && s[i + 1] == 'C') {
            num += 90;
            i += 2;
        }
        else if (s[i] == 'X' && s[i + 1] == 'L') {
            num += 40;
            i += 2;
        }
        else if (s[i] == 'I' && s[i + 1] == 'X') {
            num += 9;
            i += 2;
        }
        else if (s[i] == 'I' && s[i + 1] == 'V') {
            num += 4;
            i += 2;
        }
        else if (s[i] == 'M') {
            num += 1000;
            i++;
        }
        else if (s[i] == 'D') {
            num += 500;
            i++;
        }
        else if (s[i] == 'C') {
            num += 100;
            i++;
        }
        else if (s[i] == 'L') {
            num += 50;
            i++;
        }
        else if (s[i] == 'X') {
            num += 10;
            i++;
        }
        else if (s[i] == 'V') {
            num += 5;
            i++;
        }
        else if (s[i] == 'I') {
            num++;
            i++;
        }
    }

    return num;
}
// @lc code=end

