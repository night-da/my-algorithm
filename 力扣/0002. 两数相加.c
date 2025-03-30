/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
 */

#include <stdio.h>
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
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    typedef struct ListNode ListNode;
    ListNode* p1 = l1;
    ListNode* p2 = l2;

    while (p1 != NULL) {
        if (p2 != NULL) {
            p1->val += p2->val;
            p2 = p2->next;
        }
        if (p1->next == NULL && p2 != NULL) {
            p1->next = p2;
            break;
        }
        p1 = p1->next;
    }

    p1 = l1;

    while (p1 != NULL) {
        if (p1->val >= 10) {
            p1->val %= 10;
            if (p1->next == NULL) {
                ListNode* q = malloc(sizeof(ListNode));
                q->val = 0;
                q->next = NULL;
                
                p1->next = q;
            }
            p1->next->val++;
        }
        p1 = p1->next;
    }

    return l1;
}
// @lc code=end

