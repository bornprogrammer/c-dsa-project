#include <stdio.h>
/**
 * @brief
 *
 * @param stockPrices
 * @param size
 * @return int
 */

int bruteForce(int *stockPrices, int size)
{
    int maxProfit = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (stockPrices[j] - stockPrices[i] > maxProfit)
            {
                maxProfit = stockPrices[j] - stockPrices[i];
            }
        }
    }
    return maxProfit;
}

int optimizedSolutionOne(int *stockPrices, int size)
{
    int minValue = 655345;
    int maxProfit = 0;
    for (int i = 0; i < size; i++)
    {
        if (stockPrices[i] < minValue)
        {
            minValue = stockPrices[i];
            maxProfit = 0;
        }
        else if ((stockPrices[i] - minValue) > maxProfit)
        {
            maxProfit = stockPrices[i];
        }
    }
    return maxProfit;
};

void draft()
{
    int stockPrices[] = {7, 1, 5, 3, 6, 4};
    // int maxProfit = optimizedSolutionOne(stockPrices, 6);
    // printf("min value is %d", maxProfit);
}

int main()
{
    draft();
    int stockPrices1[] = {7, 1, 5, 3, 6, 4};
    int stockPrices2[] = {7, 6, 4, 3, 1};
    int stockPrices3[] = {1, 2, 3, 4, 5};
    int stockPrices4[] = {1};
    int stockPrices5[] = {2, 2, 2, 2, 2};
    int stockPrices6[] = {3, 3, 5, 0, 0, 3, 1, 4};
    printf("maximum profit is %d\n", optimizedSolutionOne(stockPrices1, 6));
    printf("maximum profit is %d\n", optimizedSolutionOne(stockPrices2, 5));
    printf("maximum profit is %d\n", optimizedSolutionOne(stockPrices3, 5));
    printf("maximum profit is %d\n", optimizedSolutionOne(stockPrices4, 1));
    printf("maximum profit is %d\n", optimizedSolutionOne(stockPrices5, 5));
    printf("maximum profit is %d\n", optimizedSolutionOne(stockPrices6, 8));
    return 0;
}