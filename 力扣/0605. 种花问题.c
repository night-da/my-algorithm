/*
 * @lc app=leetcode.cn id=605 lang=c
 *
 * [605] 种花问题
 */

#include <stdbool.h>

// @lc code=start
bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int total = 0;

    for (int i = 0; i < flowerbedSize; i++) {
        if (flowerbed[i] == 0) {
            bool left = (i == 0) || (flowerbed[i - 1] == 0);
            bool right = (i == flowerbedSize - 1) || (flowerbed[i + 1] == 0);

            if (left && right) {
                flowerbed[i] = 1;
                total++;
            }
        }
    }

    if (total >= n) {
        return true;
    }
    return false;
}
// @lc code=end

