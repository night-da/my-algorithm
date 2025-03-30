/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
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
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    typedef struct ListNode ListNode;

    ListNode* dummy = malloc(sizeof(ListNode));
    ListNode* p = dummy;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val < list2->val) {
            p->next = list1;
            list1 = list1->next;
        }
        else {
            p->next = list2;
            list2 = list2->next;
        }

        p = p->next;
    }

    if (list1 != NULL) {
        p->next = list1;
    }
    else {
        p->next = list2;
    }

    return dummy->next;
}
// @lc code=end

