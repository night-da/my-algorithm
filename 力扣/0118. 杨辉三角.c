/*
 * @lc app=leetcode.cn id=118 lang=c
 *
 * [118] 杨辉三角
 */

// @lc code=start
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    *returnSize = numRows;
    *returnColumnSizes = malloc(numRows * sizeof(int));

    int** arr = malloc(numRows * sizeof(int*));

    for (int i = 0; i < numRows; i++) {
        arr[i] = malloc((i + 1) * sizeof(int));
        (*returnColumnSizes)[i] = i + 1;
        
        arr[i][0] = 1;
        arr[i][i] = 1;

        for (int j = 1; j < i; j++) {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }

    return arr;
}
// @lc code=end

