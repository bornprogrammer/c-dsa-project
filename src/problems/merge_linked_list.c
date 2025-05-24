#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

Node *createNode(int item)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->value = item;
    return node;
}

void traverseLinkedList(Node *head)
{
    Node *next = head;
    while (next)
    {
        printf("%d\n", next->value);
        next = next->next;
    }
}

Node *createList(int *items, int size)
{
    Node *head = createNode(items[0]);
    Node *previousNode = head;
    for (int i = 1; i < size; i++)
    {
        Node *node = createNode(items[i]);
        previousNode->next = node;
        previousNode = node;
    }
    return head;
}

Node *mergeTwoList(Node *item1, Node *item2)
{
    /**
     * @brief
     * create new merged Node;
     * start comparing the both node if left node is less then assign the left node to merge node and seek the next node of left node
     */
    Node *mergedHead = (Node *)malloc(sizeof(Node));
    Node *head = (Node *)malloc(sizeof(Node));
    Node *node1 = item1;
    Node *node2 = item2;
    if (node1->value < node2->value)
    {
        mergedHead = node1;
        head = mergedHead;
        node1 = node1->next;
    }
    else
    {
        mergedHead = node2;
        head = mergedHead;
        node2 = node2->next;
    }
    while (node1 && node2)
    {
        if (node1->value < node2->value)
        {
            head->next = node1;
            head = head->next;
            node1 = node1->next;
        }
        else
        {
            head->next = node2;
            head = head->next;
            node2 = node2->next;
        }
    }
    while (node1)
    {
        head->next = node1;
        head = head->next;
        node1 = node1->next;
    }
    while (node2)
    {
        head->next = node2;
        head = head->next;
        node2 = node2->next;
    }
    return mergedHead;
}

int main()
{
    int item1[] = {10, 15, 24, 35, 210};
    int item2[] = {1, 5, 14, 15, 21, 30, 70, 110, 210};
    int item1Size = sizeof(item1) / sizeof(item1[0]);
    int item2Size = sizeof(item2) / sizeof(item2[0]);
    Node *head1 = createList(item1, item1Size);
    Node *head2 = createList(item2, item2Size);
    Node *mergedList = mergeTwoList(head1, head2);
    traverseLinkedList(mergedList);
}