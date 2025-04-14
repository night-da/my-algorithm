/*
 * @lc app=leetcode.cn id=746 lang=c
 *
 * [746] 使用最小花费爬楼梯
 */

#include <stdlib.h>
#include <math.h>

// @lc code=start
int minCostClimbingStairs(int* cost, int costSize) {
    int* dp = malloc((costSize + 1) * sizeof(int));
    dp[0] = 0;
    dp[1] = 0;

    for (int i = 2; i <= costSize; i++) {
        dp[i] = fmin(dp[i - 2] + cost[i - 2], dp[i - 1] + cost[i - 1]);
    }

    return dp[costSize];
}
// @lc code=end

