/*
 * @lc app=leetcode.cn id=66 lang=c
 *
 * [66] 加一
 */

#include <stdbool.h>
#include <stdlib.h>

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    bool flag = 0;

    int* res = malloc((digitsSize + 1) * sizeof(int));
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            break;
        }
        else {
            digits[i] = 0;
            if (i == 0) {
                flag = 1;
                for (int i = 0; i < digitsSize + 1; i++) {
                    if (i == 0) {
                        res[i] = 1;
                    }
                    else {
                        res[i] = 0;
                    }
                }
            }
        }
    }

    if (flag == 0) {
        *returnSize = digitsSize;
        return digits;
    }
    else {
        *returnSize = digitsSize + 1;
        return res;
    }

    free(res);
}
// @lc code=end

