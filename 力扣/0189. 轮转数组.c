/*
 * @lc app=leetcode.cn id=189 lang=c
 *
 * [189] 轮转数组
 */

// @lc code=start
void rotate(int* nums, int numsSize, int k) {
    int arr[numsSize];

    k %= numsSize;

    for (int i = 0; i < numsSize; i++) {
        if (i < numsSize - k) {
            arr[i + k] = nums[i];
        }
        else {
            arr[i - numsSize + k] = nums[i]; 
        }
    }

    for (int i = 0; i < numsSize; i++) {
        nums[i] = arr[i];
    }
}
// @lc code=end

