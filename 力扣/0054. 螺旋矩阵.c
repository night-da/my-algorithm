/*
 * @lc app=leetcode.cn id=54 lang=c
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    *returnSize = matrixSize * (*matrixColSize);

    int t = 0, l = 0, b = matrixSize - 1, r = (*matrixColSize) - 1;

    int num = 0;

    int* arr = malloc(matrixSize * (*matrixColSize) * sizeof(int));

    while (t <= b && l <= r) {
        for (int i = l; i <= r; i++) {
            arr[num++] = matrix[t][i];
        }
        t++;
        for (int i = t; i <= b; i++) {
            arr[num++] = matrix[i][r];
        }
        r--;
        if (t <= b && l <= r) {
            for (int i = r; i >= l; i--) {
                arr[num++] = matrix[b][i];
            }
            b--;
            for (int i = b; i >= t; i--) {
                arr[num++] = matrix[i][l];
            }
            l++;
        } 
    }

    return arr;
}
// @lc code=end

