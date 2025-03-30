/*
 * @lc app=leetcode.cn id=2748 lang=c
 *
 * [2748] 美丽下标对的数目
 */

// @lc code=start

int Gcd(int a, int b) {
    if (b > a) {
        int temp = a;
        a = b;
        b = temp;
    }

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int countBeautifulPairs(int* nums, int numsSize) {
    int count = 0;

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            int temp = nums[i];
            while (temp / 10 != 0) {
                temp /= 10;
            }
            int first = temp;

            int finally = nums[j] % 10;

            if (Gcd(first, finally) == 1) {
                count++;
            }
        }
    }

    return count;
}
// @lc code=end

