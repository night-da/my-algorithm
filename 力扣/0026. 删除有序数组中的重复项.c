/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
int removeDuplicates(int* nums, int numsSize) {
    int j = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[j] != nums[i]) {
            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;
}
// @lc code=end

