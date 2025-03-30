/*
 * @lc app=leetcode.cn id=23 lang=c
 *
 * [23] 合并 K 个升序链表
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
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    typedef struct ListNode ListNode;

    int arr[10000];

    int num = 0;

    for (int i = 0; i < listsSize; i++) {
        while (lists[i] != NULL) {
            arr[num++] = lists[i]->val;
            lists[i] = lists[i]->next;
        }
    }

    for (int i = 0; i < num - 1; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    ListNode* head = NULL;
    ListNode* p = NULL;

    for (int i = 0; i < num; i++) {
        ListNode* q = malloc(sizeof(ListNode));
        q->val = arr[i];
        q->next = NULL;
        if (head == NULL) {
            p = q;
            head = q;
        }
        else {
            p->next = q;
            p = q;
        }
    }

    return head;
}
// @lc code=end

