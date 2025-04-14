/*
 * @lc app=leetcode.cn id=867 lang=c
 *
 * [867] 转置矩阵
 */

#include <stdlib.h>

// @lc code=start
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int n = matrixSize;
    int m = matrixColSize[0];

    int** res = malloc(m * sizeof(int*));
    *returnSize = m;
    *returnColumnSizes = malloc(m * sizeof(int));

    for (int i = 0; i < m; i++) {
        res[i] = malloc(n * sizeof(int));
        (*returnColumnSizes)[i] = n;

        for (int j = 0; j < n; j++) {
            res[i][j] = matrix[j][i];
        }
    }

    return res;
}
// @lc code=end

