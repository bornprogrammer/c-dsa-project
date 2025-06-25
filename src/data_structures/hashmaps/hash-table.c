#include <stdio.h>

#define TABLE_SIZE 10

typedef struct
{
    char key[50];
    char value[50];
    struct HashItem *next;
} HashItem;

typedef struct HashMap
{
    HashItem **buckets;
} HashMap;

void setHash(struct HashMap map, char key[50], int value)
{
}

int createHash(char *key)
{
    int primeVal = 5381;
    int c;
    while ((c = *key++) > 0)
    {
        primeVal = (primeVal << 5) + primeVal + c;
    }
    return primeVal % TABLE_SIZE;
}

int main(void)
{
    struct HashMap *hashmap = malloc(sizeof(HashMap));
    return 0;
}