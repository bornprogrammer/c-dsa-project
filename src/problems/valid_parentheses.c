#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char *data;
    int offset;
} StackDS;

StackDS *createStack(int size)
{
    StackDS *stackDS = (StackDS *)malloc(sizeof(StackDS));
    stackDS->data = (char *)malloc(sizeof(char) * size);
    stackDS->offset = -1;
    return stackDS;
}

void push(StackDS *stack, char item)
{
    stack->data[++stack->offset] = item;
}

int isEmpty(StackDS *stack)
{
    if (stack->offset == -1)
    {
        return 1;
    }
    return 0;
}

char pop(StackDS *stack)
{
    return stack->data[stack->offset--];
}

int isParenthesesValid(char *stringInput, StackDS *stack)
{
    int size = strlen(stringInput);
    int isParenthesesValid = 1;
    for (int i = 0; i < size; i++)
    {
        if (stringInput[i] == 40 || stringInput[i] == 91 || stringInput[i] == 123)
        {
            push(stack, stringInput[i]);
        }
        else if (stringInput[i] == 41 || stringInput[i] == 93 || stringInput[i] == 125)
        {
            char poppedItem = pop(stack);
            printf("%d\n", poppedItem);
            if (!(stringInput[i] == 41 && poppedItem == 40))
            {
                isParenthesesValid = 0;
            }
            else if (!(stringInput[i] == 93 && poppedItem == 91))
            {
                isParenthesesValid = 0;
            }
            else if (!(stringInput[i] == 125 && poppedItem == 123))
            {
                isParenthesesValid = 0;
            }
        }
    }
    return isParenthesesValid;
}

int main()
{
    char input[] = "{This is [sandiop]}";
    StackDS *stack = createStack(50);
    int isValid = isParenthesesValid(input, stack);
    if (isEmpty(stack) && isValid == 1)
    {
        isValid = 1;
    }
    else
    {
        isValid = 0;
    }
    printf("%d", isValid);
    return 0;
}