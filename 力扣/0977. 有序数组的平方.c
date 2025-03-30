/*
 * @lc app=leetcode.cn id=977 lang=c
 *
 * [977] 有序数组的平方
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    int left = 0;
    int right = numsSize - 1;

    int* arr = malloc(numsSize * sizeof(int));

    int i = numsSize - 1;

    while (left <= right) {
        int left_s = pow(nums[left], 2);
        int right_s = pow(nums[right], 2);

        if (left_s > right_s) {
            arr[i] = left_s;
            left++;
            i--;
        }
        else {
            arr[i] = right_s;
            right--;
            i--;
        }
    }

    return arr;
}
// @lc code=end

