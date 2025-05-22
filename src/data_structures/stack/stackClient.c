#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    Stack *stack = createStack(10);
    push(stack, 10);
    push(stack, 15);
    push(stack, 8);
    push(stack, 1);
    push(stack, 11);
    pop(stack);
    pop(stack);
    pop(stack);
    printf("%d", peek(stack));
    return 0;
}