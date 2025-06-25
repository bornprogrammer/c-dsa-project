#include <stdio.h>

int sumOfContiguousSubArray(int *items, int size)
{
    int maxSumOfSubArray = 0;
    for (int i = 0; i < size; i++)
    {
        int sumOfSubArray = 0;
        for (int j = i; j < size; j++)
        {
            sumOfSubArray += items[j];
            if (sumOfSubArray > maxSumOfSubArray)
            {
                // sumOfSubArray = items[j];
                maxSumOfSubArray = sumOfSubArray;
            }
            // compare with max value if ith item + sum of nested iteration is greater than max value then please change the max value and current sub array
        }
    }
    return maxSumOfSubArray;
}

int main()
{
    int items[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxValue = sumOfContiguousSubArray(items, 9);
    printf("%d", maxValue);
}