/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */

#include <limits.h>

// @lc code=start
int reverse(int x) {
    int temp = x;
    int reverse = 0;

    while (temp != 0) {
        if (reverse < INT_MIN / 10 || reverse > INT_MAX / 10) {
            return 0;
        }

        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }

    return reverse;
}
// @lc code=end

