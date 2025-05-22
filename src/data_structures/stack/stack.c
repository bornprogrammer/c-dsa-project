#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack *createStack(int size)
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->data = (int *)malloc(size * sizeof(int));
    stack->offset = -1;
    stack->size = size;
    return stack;
}

int peek(Stack *stack)
{
    if (isEmpty(stack) == 1)
    {
        return stack->data[stack->offset];
    }
    return -1;
}

int isEmpty(Stack *stack)
{
    if (stack->offset >= 0)
    {
        return 1;
    }
    return 0;
}

int pop(Stack *stack)
{
    if (isEmpty(stack) >= 1)
    {
        --stack->offset;
    }
    return -1;
}

void push(Stack *stack, int item)
{
    stack->data[++stack->offset] = item;
}
