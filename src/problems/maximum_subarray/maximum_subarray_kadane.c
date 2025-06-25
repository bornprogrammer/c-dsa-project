#include <stdio.h>
#include <stdlib.h>

int *sumOfContiguousSubArrayUsingKadaneAlgo(int *items, int size)
{
    int maxSum = items[0];
    int curSum = items[0];
    int *returnedValue = malloc(sizeof(int) * 3);
    returnedValue[0] = 0;
    returnedValue[1] = 0;
    int isCurSumChanged = -1;
    for (int i = 1; i < size; i++)
    {
        if (items[i] > (items[i] + curSum)) // will be true when cursum is negative value
        {
            curSum = items[i];
            isCurSumChanged = i;
        }
        else
        {
            curSum = items[i] + curSum;
        }
        if (curSum > maxSum)
        {
            maxSum = curSum;
            if (isCurSumChanged > -1)
            {
                returnedValue[0] = isCurSumChanged;
                isCurSumChanged = -1;
            }
            returnedValue[1] = i;
        }
    }
    returnedValue[2] = maxSum;
    return returnedValue;
};

int main()
{
    // int items[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // int items[] = {-5, -2, -3, -4};
    int items[] = {2, -1, 2, 3, -9, 4};
    // int items[] = {1, 2, 3, 4};
    int *result = sumOfContiguousSubArrayUsingKadaneAlgo(items, 6);
    printf("max sum is %d, starting from %d ending till %d", result[2], result[0], result[1]);
}