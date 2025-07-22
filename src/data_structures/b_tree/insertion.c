#include <stdio.h>
#include <stdlib.h>

#define DEGREE 4

typedef struct BNode
{
    int *keys;
    int size;
    int isFull;
    int isLeafNode;
    struct BNode *pointer;
} BNode;

// fillFirstNode() // fill all. elements where degree - 1

BNode *createRootNode(int value)
{
    BNode *node = malloc(sizeof(BNode));
    node->keys = malloc(sizeof(int) * DEGREE);
    node->keys[0] = value;
    node->isFull = 0;
    node->isLeafNode = 1; // because keys will be inserted to only leaf node
    node->size = 1;
    return node;
}

BNode *createNode(int value)
{
    BNode *node = malloc(sizeof(BNode));
    node->keys = malloc(sizeof(int) * DEGREE);
    node->keys[0] = value;
    node->isFull = 0;
    node->isLeafNode = 1;
    node->size = 1;
    return node;
}

BNode *insertKeyAndPromotes(int key, BNode *rootNode)
{
    if (rootNode->size == DEGREE - 1) // keys are full
    {
    }
    else
    {
    }
    return rootNode;
};

BNode *insertKey(int key, BNode *node) {
    /**
     * @brief responsibilities
     * if its leaf node then go recursively and insert the item in child node
     */
};

int findOffsetToInsert(int key, BNode *node)
{
    int *keys = node->keys;
    int start = 0;
    int end = node->size - 1;
    int offset;
    while (start <= end)
    {
        int mid = (end + start) / 2;
        if (key > keys[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return start;
}

void promoteNode()
{
}

/**
 * @brief
 * will design the struct for our b tree structure -> Done
 * create a method for empty node.
 * let solve the insertion sorting algo
 * find the bst logic to insert
 */

int main()
{
    int values[] = {2, 5, 8, 10, 15, 17, 23, 30, 37, 49, 58, 67, 110, 127, 130};
    BNode *rootNode = createRootNode(values[0]);
    for (int i = 1; i < 15; i++)
    {
        rootNode = insertKey(values[i], rootNode);
    }
    // printf("%d", rootNode->keys[1]);
    return 0;
}