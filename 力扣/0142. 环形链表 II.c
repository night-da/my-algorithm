/*
 * @lc app=leetcode.cn id=142 lang=c
 *
 * [142] 环形链表 II
 */

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    typedef struct ListNode ListNode;

    ListNode* fast = head;
    ListNode* slow = head;

    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow) {
            ListNode* i1 = fast;
            ListNode* i2 = head;
            while (i1 != i2) {
                i1 = i1->next;
                i2 = i2->next;
            }

            return i2;
        }
    }

    return NULL;
}
// @lc code=end

