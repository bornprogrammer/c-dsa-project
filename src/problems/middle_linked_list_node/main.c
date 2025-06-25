#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

Node *linkedList(int *items, int itemSize)
{
    Node *root = malloc(sizeof(Node));
    if (root == NULL)
    {
        printf("Allocation failed");
        return NULL;
    }
    root->value = items[0];
    Node *prev = root;
    for (int i = 1; i < itemSize; i++)
    {
        Node *current = malloc(sizeof(Node));
        current->value = items[i];
        prev->next = current;
        prev = current;
    }
    return root;
}

int midValue(Node *root)
{
    Node *slow = root;
    Node *fast = root;
    while (slow && fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast->next == NULL)
    {
        return slow->value;
    }
    else if (fast->next->next == NULL)
    {
        return slow->next->value;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int items[] = {4, 1, 5, 10};
    // int items[] = {2, 4, 5, 4, 2};
    Node *root = linkedList(items, 4);
    int middleItem = midValue(root);
    printf("%d", middleItem);
    return 0;
};
