/*
 * @lc app=leetcode.cn id=83 lang=c
 *
 * [83] 删除排序链表中的重复元素
 */

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
struct ListNode* deleteDuplicates(struct ListNode* head) {
    typedef struct ListNode ListNode;

    ListNode* p = head;
    while (p && p->next) {
        ListNode* q = p->next;
        while(q && q->val == p->val) {
            q = q->next;
        }
        p->next = q;
        p = p->next;
    }

    return head;
}
// @lc code=end

