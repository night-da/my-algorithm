/*
 * @lc app=leetcode.cn id=704 lang=c
 *
 * [704] 二分查找
 */

// @lc code=start
int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    int middle;

    while (left <= right) {
        middle = (left + right) / 2;
        if (nums[middle] < target) {
            left = middle + 1;
        }
        else if (nums[middle] == target) {
            return middle;
        }
        else if (nums[middle] > target) {
            right = middle - 1;
        }
    }

    return -1;
}
// @lc code=end

