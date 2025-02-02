#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

typedef struct {
    int data[MAX];
    int top;
} Stack;

void init_stack(Stack *s) {
    s->top = 0;
}

void push(Stack *s, int x) {
    if (s->top < MAX) {
        s->data[s->top++] = x;
    }
}

int pop(Stack *s) {
    if (s->top > 0) {
        return s->data[--s->top];
    }
    return -1; // Empty
}

typedef struct {
    int data[MAX];
    int front, rear;
} Queue;

void init_queue(Queue *q) {
    q->front = q->rear = 0;
}

void enqueue(Queue *q, int x) {
    if (q->rear < MAX) {
        q->data[q->rear++] = x;
    }
}

int dequeue(Queue *q) {
    if (q->front < q->rear) {
        return q->data[q->front++];
    }
    return -1; // Empty
}

typedef struct {
    int data[MAX];
    int size;
} PriorityQueue;

void init_pqueue(PriorityQueue *pq) {
    pq->size = 0;
}

void push_pqueue(PriorityQueue *pq, int x) {
    if (pq->size < MAX) {
        pq->data[pq->size++] = x;
    }
}

int pop_pqueue(PriorityQueue *pq) {
    if (pq->size > 0) {
        int max_index = 0;
        for (int i = 1; i < pq->size; i++) {
            if (pq->data[i] > pq->data[max_index]) {
                max_index = i;
            }
        }
        int max_value = pq->data[max_index];
        pq->data[max_index] = pq->data[--pq->size];
        return max_value;
    }
    return -1; // Empty
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        Stack stack;
        Queue queue;
        PriorityQueue pqueue;

        init_stack(&stack);
        init_queue(&queue);
        init_pqueue(&pqueue);

        int is_stack = 1, is_queue = 1, is_pqueue = 1;

        for (int i = 0; i < n; i++) {
            int command, x;
            scanf("%d", &command);
            if (command == 1) {
                scanf("%d", &x);
                if (is_stack) push(&stack, x);
                if (is_queue) enqueue(&queue, x);
                if (is_pqueue) push_pqueue(&pqueue, x);
            } else if (command == 2) {
                scanf("%d", &x);
                if (is_stack && pop(&stack) != x) is_stack = 0;
                if (is_queue && dequeue(&queue) != x) is_queue = 0;
                if (is_pqueue && pop_pqueue(&pqueue) != x) is_pqueue = 0;
            }
        }

        if (is_stack + is_queue + is_pqueue > 1) {
            printf("not sure\n");
        } else if (is_stack) {
            printf("stack\n");
        } else if (is_queue) {
            printf("queue\n");
        } else if (is_pqueue) {
            printf("priority queue\n");
        } else {
            printf("impossible\n");
        }
    }

    return 0;
}
