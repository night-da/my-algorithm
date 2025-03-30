#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

// 存储结构
typedef struct node {
    ElemType data;
    struct node* next;
} Node;

// 初始化
Node* initList() {
    Node* head = malloc(sizeof(Node));
    head->data = 0;
    head->next = NULL;
    return head;
}

// 头插法 (头结点的后面)
void insertHead(Node* L, ElemType e) {
    Node* p = malloc(sizeof(Node));
    p->data = e;
    p->next = L->next;
    L->next = p;
}

// 遍历
void listNode(Node* L) {
    Node* p = L->next;
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

// 尾插法
void insertTail(Node* L, ElemType e) {
    Node* tail = L;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    Node* p = malloc(sizeof(Node));
    p->data = e;
    tail->next = p;
    p->next = NULL;
}

// 在指定位置插入数据
void insertNode(Node* L, int pos, ElemType e) {
    Node* p = L;
    for (int i = 0; i < pos - 1; i++) {
        p = p->next;
    }

    Node* q = malloc(sizeof(Node));
    q->data = e;
    q->next = p->next;
    p->next = q;
}

// 删除节点
void deleteNode(Node* L, int pos) {
    Node* p = L;
    for (int i = 0; i < pos - 1; i++) {
        p = p->next;
    }
    Node* q = p->next;
    p->next = q->next;
    free(q);
}

// 获取链表长度 (包含头节点)
int listLength(Node* L) {
    Node* p = L;
    int len = 0;
    while (p != NULL) {
        p = p->next;
        len++;
    }
    return len;
}

// 释放链表 (保留头节点)
void freeList(Node* L) {
    Node* p = L->next;
    Node* q;
    while (p != NULL) {
        q = p->next;
        free(p);
        p = q;
    }
    L->next = NULL;
}

int main() {
    Node* list = initList();

    insertHead(list, 10);
    insertHead(list, 20);
    insertHead(list, 30);
    listNode(list);

    insertTail(list, 40);
    insertTail(list, 50);
    listNode(list);

    insertNode(list, 2, 15);
    listNode(list);

    deleteNode(list, 2);
    listNode(list);

    printf("%d\n", listLength(list));

    freeList(list);
    printf("%d\n", listLength(list));

    return 0;
}