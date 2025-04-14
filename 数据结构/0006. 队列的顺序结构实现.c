#include <stdio.h>
#include <stdbool.h>

#define MAXSIZE 100
typedef int ElemType;

typedef struct {
    ElemType data[MAXSIZE];
    int front;
    int rear;
} Queue;

// 初始化
void initQueue(Queue* Q) {
    Q->front = 0;
    Q->rear = 0;
}

// 判断队列是否为空
bool isEmpty(Queue* Q) {
    if (Q->front == Q->rear) {
        return true;
    }
    else {
        return false;
    }
}

// 出队
void dequeue(Queue* Q) {
    Q->front++;
}

// 调整队列
int queueFull(Queue* Q) {
    if (Q->front > 0) {
        int step = Q->front;

        for (int i = Q->front; i <= Q->rear; i++) {
            Q->data[i - step] = Q->data[i];
        }
        Q->front = 0;
        Q->rear = Q->rear - step;
        return 1;
    }
    else { // 真的满了
        return 0; 
    }
}

// 入队
int equeue(Queue* Q, ElemType e) {
    if (Q->rear >= MAXSIZE) {
        if (!queueFull(Q)) { // 入队失败
            return 0; 
        }
    }
    Q->data[Q->rear] = e;
    Q->rear++;
    return 1;
}

// 获取队头数据
ElemType getHead(Queue* Q) {
    ElemType e = Q->data[Q->front];
    return e;
}

int main() {
    Queue q;
    initQueue(&q);

    equeue(&q, 10);
    equeue(&q, 20);
    equeue(&q, 30);

    dequeue(&q);
    ElemType e = getHead(&q);
    printf("%d\n", e);

    return 0;
}