#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int key;
    int value;
} HashItem;

int *bruteForce(int *items, int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (items[i] + items[j] == target)
            {
                int *result = (int *)malloc(sizeof(int) * 2);
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return NULL;
}

int *optimizedSolutionOne(int *nums, int target, int numsSize)
{
    HashItem hash[2048] = {0}; // simple hash array
    for (int i = 0; i < numsSize; i++)
    {
        int complement = target - nums[i];
        int hashIndex = (complement) & 2047;
        if (hash[hashIndex].value || complement == nums[hash[hashIndex].key])
        {
            int *result = (int *)malloc(2 * sizeof(int));
            result[0] = hash[hashIndex].key;
            result[1] = i;
            return result;
        }
        hash[nums[i] & 2047].key = i;
        hash[nums[i] & 2047].value = 1;
    }
    return NULL;
}

int *myApproach1(int *nums, int size, int target)
{
    int items[6] = {0};
    for (int i = 0; i < size; i++)
    {
        items[nums[i] % size] = nums[i];
        int complement = target - nums[i];
        int hashIndex = complement % size;
        if (items[hashIndex] > 0 && (items[hashIndex] + nums[i]) == target)
        {
            int result[2];
            result[0] = items[hashIndex];
            result[1] = i;
        }
    }
}

int main()
{
    int nums[] = {13, 15, 91, 19, 10};
    int *result = optimizedSolutionOne(nums, 29, 6);
    printf("%d", result);
    return 0;
}