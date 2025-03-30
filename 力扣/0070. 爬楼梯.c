/*
 * @lc app=leetcode.cn id=70 lang=c
 *
 * [70] 爬楼梯
 */

#include <stdlib.h>

// @lc code=start
int climbStairs(int n) {
    int* arr = malloc((n + 2) * sizeof(int));
    arr[1] = 1;
    arr[2] = 2;

    for (int i = 3; i <= n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    return arr[n];
}
// @lc code=end

