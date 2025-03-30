/*
 * @lc app=leetcode.cn id=25 lang=c
 *
 * [25] K 个一组翻转链表
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
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    typedef struct ListNode ListNode;
    ListNode* dummy = malloc(sizeof(ListNode));
    dummy->next = head;

    ListNode* p0 = dummy;
    int len = 0;
    while (p0->next != NULL) {
        p0 = p0->next;
        len++;
    }

    ListNode* p = dummy;

    while (len >= k) {
        ListNode* temp;
        ListNode* pre = NULL;
        ListNode* cur = p->next;

        for (int i = 0; i < k; i++) {
            temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }

        temp = p->next;
        p->next->next = cur;
        p->next = pre;
        p = temp;

        len -= k;
    }

    return dummy->next;
}
// @lc code=end

