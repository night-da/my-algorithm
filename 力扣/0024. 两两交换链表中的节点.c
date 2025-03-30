/*
 * @lc app=leetcode.cn id=24 lang=c
 *
 * [24] 两两交换链表中的节点
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
struct ListNode* swapPairs(struct ListNode* head) {
    typedef struct ListNode ListNode;

    ListNode* dummy = malloc(sizeof(ListNode));
    dummy->next = head;

    ListNode* p = dummy;

    while (p->next != NULL && p->next->next != NULL) {
        ListNode* temp1 = p->next;
        ListNode* temp2 = p->next->next->next;

        p->next = p->next->next;
        p->next->next = temp1;
        p->next->next->next = temp2;

        p = p->next->next;
    }

    return dummy->next;
}
// @lc code=end

