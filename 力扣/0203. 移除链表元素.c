/*
 * @lc app=leetcode.cn id=203 lang=c
 *
 * [203] 移除链表元素
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
struct ListNode* removeElements(struct ListNode* head, int val) {
    typedef struct ListNode ListNode;

    ListNode* dummy;
    dummy = malloc(sizeof(ListNode));
    dummy->next = head;
    
    ListNode* p = dummy;

    while(p->next != NULL) {
        if (p->next->val == val) {
            p->next = p->next->next;
            }
            else {
                p = p->next;
            }
    }

    head = dummy->next;
    free(dummy);
    return head;
}
// @lc code=end

