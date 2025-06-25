#include <stdio.h>

int robHouse(int *houses, int index, int *memo)
{
    if (index == 0)
    {
        return houses[0];
    }
    else if (memo[index] != -1)
    {
        return memo[index];
    }
    else if (index == 1)
    {
        if (houses[0] > houses[1])
        {
            return houses[0];
        }
        return houses[1];
    }
    else
    {
        int val1 = houses[index] + robHouse(houses, index - 2, memo);
        int val2 = robHouse(houses, index - 1, memo);
        if (val1 > val2)
        {
            memo[index] = val1;
            return val1;
        }
        memo[index] = val2;
        return val2;
    }
}

int main()
{
    int dp[1000] = {};
    for (int i = 0; i < 100; i++)
    {
        dp[i] = -1;
    }
    // int items[] = {1, 3, 1, 3, 100};
    // int items[] = {1, 3, 1, 3, 100};
    // int items[] = {1, 3, 1, 3, 100};
    int items[] = {2, 3, 2, 4, 2};
    int robbedHouseMaxValue = robHouse(items, 5, dp);
    printf("%d", dp[4]);
    return 0;
}