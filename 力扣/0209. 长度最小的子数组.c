/*
 * @lc app=leetcode.cn id=209 lang=c
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
int minSubArrayLen(int target, int* nums, int numsSize) {
    int left = 0, right = 0;

    int len = 100001;
    int total = 0;

    while (right < numsSize) {
        total += nums[right];
        right++;

        while (total >= target) {
            int sublen = right - left;
            if (sublen < len) {
                len = sublen;
            }
            total -= nums[left];
            left++;
        }
    }

    if (len != 100001) {
        return len;
    }
    else {
        return 0;
    }
}
// @lc code=end

