/*
 * @lc app=leetcode.cn id=707 lang=c
 *
 * [707] 设计链表
 */

#include <stdio.h>

// @lc code=start
typedef struct node {
    int val;
    struct node* next;
} MyLinkedList;

MyLinkedList* myLinkedListCreate() {
    MyLinkedList* head = malloc(sizeof(MyLinkedList));
    head->val = 0;
    head->next = NULL;
    return head;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    MyLinkedList* p = obj->next;
    for (int i = 0; i < index && p; i++) {
        p = p->next;
    }

    if (p == NULL) {
        return -1;
    }

    return p->val;
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    MyLinkedList* p = malloc(sizeof(MyLinkedList));
    p->val = val;
    p->next = obj->next;
    obj->next = p;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    MyLinkedList* tail = obj;
    while (tail->next) {
        tail = tail->next;
    }

    MyLinkedList* p = malloc(sizeof(MyLinkedList));
    p->val = val;
    tail->next = p;
    p->next = NULL;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    MyLinkedList* p = obj;
    for (int i = 0; i < index && p; i++) {
        p = p->next;
    }
    if (p == NULL) {
        return;
    }

    MyLinkedList* q = malloc(sizeof(MyLinkedList));
    q->val = val;
    q->next = p->next;
    p->next = q;
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    MyLinkedList* p = obj;
    for (int i = 0; i < index && p->next; i++) {
        p = p->next;
    }

    if (p->next == NULL) {
        return;
    }
    
    MyLinkedList* q = p->next;
    p->next = q->next;
    free(q);
}

void myLinkedListFree(MyLinkedList* obj) {
    MyLinkedList* p = obj->next;
    MyLinkedList* q;
    while (p) {
        q = p->next;
        free(p);
        p = q;
    }
    obj->next = NULL;
}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);
 
 * myLinkedListAddAtHead(obj, val);
 
 * myLinkedListAddAtTail(obj, val);
 
 * myLinkedListAddAtIndex(obj, index, val);
 
 * myLinkedListDeleteAtIndex(obj, index);
 
 * myLinkedListFree(obj);
*/
// @lc code=end

