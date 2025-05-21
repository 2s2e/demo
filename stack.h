#ifndef STACK_H
#define STACK_H

#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// A pointer to the first node in the linked list that represents a stack.
extern struct Node *stackTop;

/**
 * Insert `num` at the beginning of the stack.
 */
void push(int num);

/**
 * Remove the first node in the stack and return the `data` in it.
 * You may assume that the stack is not empty.
 *   (This means you shouldn't test situations where you pop from an empty stack!)
 */
int pop();

/**
 * Copy up to `space` integers into the array pointed to by `array`.
 * The "top" of the stack should correspond to the beginning of the array.
 * For example, if calling pop() would return 42, then the first element of the array should be set
 * to 42.
 */
void copy_to_array(int *array, size_t space);

// Convenience functions for your tests

/**
 * Return 1 if the stack is empty, otherwise 0.
 */
int empty();

/**
 * Pop all items from the stack.
 */
void clear();

#endif
