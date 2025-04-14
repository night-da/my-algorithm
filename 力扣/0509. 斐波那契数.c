/*
 * @lc app=leetcode.cn id=509 lang=c
 *
 * [509] 斐波那契数
 */

#include <stdlib.h>

// @lc code=start
int fib(int n) {
    if (n <= 1) {
        return n;
    }

    int* dp = malloc((n + 1) * sizeof(int));
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}
// @lc code=end

