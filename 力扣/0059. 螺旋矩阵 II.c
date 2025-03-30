/*
 * @lc app=leetcode.cn id=59 lang=c
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {
    *returnSize = n;
    *returnColumnSizes = malloc(n * sizeof(int));

    int l = 0, r = n - 1, t = 0, b = n - 1;

    int** mat = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        mat[i] = malloc(n * sizeof(int));
        (*returnColumnSizes)[i] = n;
    }

    int num = 1;

    while(t <= b && l <= r) {
        for (int i = l; i <= r; i++) {
            mat[t][i] = num++;    
        }
        t++;
        for (int i = t; i <= b; i++) {
            mat[i][r] = num++;
        }
        r--;
        if (t <= b && l <= r) {
            for (int i = r; i >= l; i--) {
                mat[b][i] = num++;
            }
            b--;
            for (int i = b; i >= t; i--) {
                mat[i][l] = num++;
            }
            l++;
        }
    }

    return mat;
}
// @lc code=end

