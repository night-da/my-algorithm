/*
 * @lc app=leetcode.cn id=2643 lang=c
 *
 * [2643] 一最多的行
 */

#include <stdlib.h>

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rowAndMaximumOnes(int** mat, int matSize, int* matColSize, int* returnSize) {
    *returnSize = 2;

    int ans = 0;
    int max = 0;
    for (int i = 0; i < matSize; i++) {
        int count = 0;
        for (int j = 0; j < *matColSize; j++) {
            if (mat[i][j] == 1) {
                count++;
            }
        }
        if (count > max) {
            max = count;
            ans = i;
        }
    }

    int* answer = malloc(2 * sizeof(int));
    answer[0] = ans, answer[1] = max;

    return answer;
}
// @lc code=end

