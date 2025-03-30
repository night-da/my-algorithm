/*
 * @lc app=leetcode.cn id=119 lang=c
 *
 * [119] 杨辉三角 II
 */

#include <stdlib.h>

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    *returnSize = rowIndex + 1;
    int* arr = malloc((rowIndex + 1) * sizeof(int));

    for (int i = 0; i < rowIndex + 1; i++) {
        arr[i] = 1;
    }

    for (int i = 1; i < rowIndex; i++) {
        for (int j = i; j >= 1; j--) {
            arr[j] += arr[j - 1];
        }
    }

    return arr;
}
// @lc code=end

