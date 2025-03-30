#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ElemType;

typedef struct stack {
    ElemType data;
    struct stack *next;
} Stack;

// 初始化
Stack* initStack() {
    Stack* s = malloc(sizeof(Stack));
    s->data = 0;
    s->next = NULL;
    return s;
}

// 判断栈是否为空
bool isEmpty(Stack* s) {
    if (s->next == NULL) {
        return true;
    }
    else {
        return false;
    }
}

// 进栈 / 压栈
void push(Stack* s, ElemType e) {
    Stack* p = malloc(sizeof(Stack));
    p->data = e;
    p->next = s->next;
    s->next = p;
}

// 出栈
void pop(Stack* s) {
    Stack* p = s->next;
    s->next = p->next;
    free(p);
}

// 获取栈顶元素
ElemType getTop(Stack* s) {
    return s->next->data;
}

int main() {
    Stack* s = initStack();

    push(s, 10);
    push(s, 20);
    push(s, 30);

    pop(s);
    int e = getTop(s);
    printf("%d\n", e);

    return 0;
}