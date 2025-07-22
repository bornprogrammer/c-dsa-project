#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    char *name;
    struct Node *next;
} Node;

Node *createNode(char *name)
{
    Node *node = malloc(sizeof(Node));
    node->name = malloc(50 * sizeof(char));
    node->name = name;
    return node;
}

Node *createLL(char *names[], int size)
{
    Node *rootNode = createNode(names[0]);
    Node *prev = rootNode;
    for (int i = 1; i < size; i++)
    {
        Node *current = createNode(names[i]);
        prev->next = current;
        prev = current;
    }
    return rootNode;
}

Node *reverseLL(Node *root)
{
    Node *prev = NULL;
    Node *current = root;
    while (current)
    {
        Node *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

int main()
{
    char *names[] = {"Sandip", "Ankit", "Mishka", "Ramesh", "Usha"};
    Node *rootNode = createLL(names, 5);
    Node *rootNode1 = reverseLL(rootNode);
    printf("%s", rootNode1->next->name);
    return 0;
}