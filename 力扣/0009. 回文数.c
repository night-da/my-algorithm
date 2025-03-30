/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

#include <stdbool.h>

// @lc code=start
bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    int arr[10];
    int temp = x;

    int index = 0;
    while (temp != 0) {
        arr[index] = temp % 10;
        temp /= 10;
        index++;
    }

    for (int i = 0; i < index / 2; i++) {
        if (arr[i] != arr[index - i - 1]) {
            return false;
        }
    }

    return true;
}
// @lc code=end

