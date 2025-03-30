/*
 * @lc app=leetcode.cn id=231 lang=c
 *
 * [231] 2 的幂
 */

#include <stdbool.h>
#include <math.h>

// @lc code=start
bool isPowerOfTwo(int n) {
    for (int i = 0; i < 32; i++) {
        if (n == pow(2, i)) {
            return true;
        }
    }
    
    return false;
}
// @lc code=end

