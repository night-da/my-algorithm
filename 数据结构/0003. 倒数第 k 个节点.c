#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct node {
    ElemType data;
    struct node* next;
} Node;

Node* initList() {
    Node* head = malloc(sizeof(Node));
    head->data = 0;
    head->next = NULL;
    return head;
}

void insertHead(Node* L, ElemType e) {
    Node* p = malloc(sizeof(Node));
    p->data = e;
    p->next = L->next;
    L->next = p;
}

void listNode(Node* L) {
    Node* p = L->next;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

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

int findNodeFS(Node* L, int k) {
    Node* fast = L->next;
    Node* slow = L->next;
    for (int i = 0; i < k; i++) {
        fast = fast->next;
    }
    while (fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }
    return slow->data;
}

int main() {
    Node* list = initList();

    insertHead(list, 10);
    insertHead(list, 20);
    insertHead(list, 30);
    listNode(list);

    printf("%d\n", findNodeFS(list, 2));

    freeList(list);

    return 0;
}