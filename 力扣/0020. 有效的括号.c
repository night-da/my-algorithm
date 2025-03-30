/*
 * @lc app=leetcode.cn id=20 lang=c
 *
 * [20] 有效的括号
 */

#include <stdbool.h>
#include <string.h>

// @lc code=start
typedef struct {
    char* data;
    int top;
} stack;

bool isValid(char* s) {
    int len = strlen(s);
    if (len % 2 != 0) {
        return false;
    }

    stack stk;
    stk.data = malloc(len * sizeof(char));
    stk.top = -1;

    for (int i = 0; i < len; i++) {
        char ch = s[i];
        if (ch == '(' || ch == '[' || ch == '{') {
            stk.data[++stk.top] = ch;
        }
        else {
            if (stk.top == -1) {
                return false;
            }
            if (ch == ')' && stk.data[stk.top] == '(' ||
                ch == ']' && stk.data[stk.top] == '[' ||
                ch == '}' && stk.data[stk.top] == '{') {
                stk.top--;
            }
            else {
                return false;
            }
        }
    }

    return stk.top == -1;
}
// @lc code=end

