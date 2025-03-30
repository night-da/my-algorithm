#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100
typedef int ElemType;

// 存储结构
typedef struct {
    ElemType data[MAXSIZE];
    int length;
} SeqList;

// 初始化
void initList(SeqList *L) {
    L->length = 0;
}

// 在尾部添加元素
void appendElem(SeqList *L, ElemType e) {
    if (L->length < MAXSIZE) {
        L->data[L->length] = e;
        L->length++;
    }
}

// 遍历
void listElem(SeqList *L) {
    for (int i = 0; i < L->length; i++) {
        printf("%d ", L->data[i]);
    }
    printf("\n");
}

// 插入元素 (pos是位置，而不是下标)
void insertElem(SeqList *L, int pos, ElemType e) {
    if (pos <= L->length) {
        for (int i = L->length - 1; i >= pos - 1; i--) {
            L->data[i + 1] = L->data[i];
        }
        L->data[pos - 1] = e;
        L->length++;
    }
}

// 删除元素 (最后一个元素直接减长度)
void deleteElem(SeqList *L, int pos) {
    if (pos < L->length) {
        for (int i = pos; i < L->length; i++) {
            L->data[i - 1] = L->data[i];
        }
    }
    L->length--;
}

// 查找 (元素第一次出现的位置)
int findElem(SeqList* L, ElemType e) {
    for (int i = 0; i < L->length; i++) {
        if (L->data[i] == e) {
            return i + 1;
        }
    }
    return 0;
}

int main() {
    SeqList list;
    initList(&list);

    appendElem(&list, 87);
    appendElem(&list, 67);
    appendElem(&list, 40);
    appendElem(&list, 8);
    appendElem(&list, 23);
    listElem(&list);

    insertElem(&list, 1, 18);
    listElem(&list);

    deleteElem(&list, 2);
    listElem(&list);

    printf("%d\n", findElem(&list, 40));

    return 0;
}