/*
 * @lc app=leetcode.cn id=70 lang=c
 *
 * [70] 爬楼梯
 */

#include <stdlib.h>

// @lc code=start
int climbStairs(int n) {
    if (n <= 2) {
        return n;
    }

    int* dp = malloc((n + 1) * sizeof(int));
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}
// @lc code=end

