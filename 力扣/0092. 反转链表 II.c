/*
 * @lc app=leetcode.cn id=92 lang=c
 *
 * [92] 反转链表 II
 */

#include <stdlib.h>

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
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    typedef struct ListNode ListNode;
    ListNode* dummy = malloc(sizeof(ListNode));
    dummy->next = head;

    ListNode* p = dummy;
    for (int i = 0; i < left - 1; i++) {
        p = p->next;
    }

    ListNode* temp;
    ListNode* pre = NULL;
    ListNode* cur = p->next;

    for (int i = 0; i < right - left + 1; i++) {
        temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = temp;
    }

    p->next->next = cur;
    p->next = pre;

    return dummy->next;
}
// @lc code=end

