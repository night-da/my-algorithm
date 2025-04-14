/*
 * @lc app=leetcode.cn id=412 lang=c
 *
 * [412] Fizz Buzz
 */

#include <stdlib.h>
#include <string.h>

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;

    int* arr_1 = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr_1[i] = i + 1;
    }

    char** arr_2 = malloc(n * sizeof(char*));
    for (int i = 1; i <= n; i++) {
        arr_2[i - 1] = malloc(9 * sizeof(char));

        if (arr_1[i - 1] % 3 == 0 && arr_1[i - 1] % 5 == 0) {
            strcpy(arr_2[i - 1], "FizzBuzz");
        }
        else if (arr_1[i - 1] % 3 == 0) {
            strcpy(arr_2[i - 1], "Fizz");
        }
        else if (arr_1[i - 1] % 5 == 0) {
            strcpy(arr_2[i - 1], "Buzz");
        }
        else {
            sprintf(arr_2[i - 1], "%d", arr_1[i - 1]);
        }
    }

    return arr_2;
}
// @lc code=end

