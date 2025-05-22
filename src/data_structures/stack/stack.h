// stack.h
#ifndef STACK_H
#define STACK_H

#ifdef __cplusplus
extern "C" {
#endif


typedef struct{
    int* data;
    int size;
    int offset;
} Stack;

Stack *createStack(int size);

void push(Stack *stack,int item);

int pop(Stack *stack);

int peek(Stack *stack);

int isEmpty(Stack *stack);


#ifdef __cplusplus
#endif

#endif