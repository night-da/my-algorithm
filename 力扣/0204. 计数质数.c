/*
 * @lc app=leetcode.cn id=204 lang=c
 *
 * [204] 计数质数
 */

#include <stdbool.h>
#include <string.h>

// @lc code=start
int countPrimes(int n) {
    bool prime[10000000];
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = 0;
            }
        }
    }

    int res = 0;
    for (int i = 2; i < n; i++) {
        if (prime[i]) {
            res++;
        }
    }

    return res;
}
// @lc code=end

