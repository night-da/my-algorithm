/*
 * @lc app=leetcode.cn id=206 lang=c
 *
 * [206] 反转链表
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
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* temp;
    struct ListNode* pre = NULL;

    while (head) {
        temp = head->next;
        head->next = pre;
        pre = head;
        head = temp;
    }

    return pre;
}
// @lc code=end

