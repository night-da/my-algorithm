/*
 * @lc app=leetcode.cn id=160 lang=c
 *
 * [160] 相交链表
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
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    typedef struct ListNode ListNode;

    ListNode* pA = headA;
    ListNode* pB = headB;

    int lenA = 0;
    int lenB = 0;

    while (pA) {
        lenA++;
        pA = pA->next;
    }

    while (pB) {
        lenB++;
        pB = pB->next;
    }

    pA = headA;
    pB = headB;

    if (lenA > lenB) {
        for (int i = 0; i < lenA - lenB && pA; i++) {
            pA = pA->next;
        }
    }
    else {
        for (int i = 0; i < lenB - lenA && pB; i++) {
            pB = pB->next;
        }
    }

    while (pA) {
        if (pA != pB) {
            pA = pA->next;
            pB = pB->next;
        }
        else {
            return pA;
        }
    }

    return NULL;
}
// @lc code=end

