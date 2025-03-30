/*
 * @lc app=leetcode.cn id=121 lang=c
 *
 * [121] 买卖股票的最佳时机
 */

#include <math.h>

// @lc code=start
int maxProfit(int* prices, int pricesSize) {
    int res = 0;
    int min = prices[0];
    
    for (int i = 1; i < pricesSize; i++) {
        res = fmax(res, prices[i] - min);
        min = fmin(min, prices[i]);
    }

    return res;
}
// @lc code=end

