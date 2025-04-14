/*
 * @lc app=leetcode.cn id=495 lang=c
 *
 * [495] 提莫攻击
 */

// @lc code=start
int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {
    int res = 0;

    for (int i = 0; i < timeSeriesSize; i++) {
        int end = timeSeries[i] + duration - 1;
        if (i == timeSeriesSize - 1 || timeSeries[i + 1] > end) {
            res += duration;
        }
        else {
            res += timeSeries[i + 1] - timeSeries[i];
        }
    }

    return res;
}
// @lc code=end

