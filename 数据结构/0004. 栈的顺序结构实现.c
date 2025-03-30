#include <stdio.h>
#include <stdbool.h>

#define MAXSIZE 100
typedef int ElemType;

typedef struct {
    ElemType data[MAXSIZE];
    int top;
} Stack;

// 初始化
void initStack(Stack* s) {
    s->top = -1;
}

// 判断栈是否为空
bool isEmpty(Stack* s) {
    if (s->top == -1) {
        return true;
    }
    else {
        return false;
    }
}

// 进栈 / 压栈
void push(Stack* s, ElemType e) {
    s->top++;
    s->data[s->top] = e;
}

// 出栈
void pop(Stack* s) {
    s->top--;
}

// 获取栈顶元素
ElemType getTop(Stack* s) {
    return s->data[s->top];
}

int main() {
    Stack s;
    initStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    pop(&s);
    int e = getTop(&s);
    printf("%d\n", e);

    return 0;
}