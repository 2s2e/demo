#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

struct Node *stackTop;

int empty() { return stackTop == NULL; }
void clear() {
    while (!empty())
        pop();
}

int pop() {
    struct Node *deleting = stackTop;
    int i = deleting->data;
    stackTop = deleting->next;
    free(deleting);
    return i;
}

void push(int i) {
    struct Node *new = malloc(sizeof(struct Node));
    new->data = i;
    new->next = stackTop;
    stackTop = new;
}