#include <stdio.h>

int robHouse(int *houses, int startingFrom, int size, int maxValue)
{
    int prevValue = 0;
    for (int i = 0; i < size; i++)
    {
        if (((maxValue - prevValue) + houses[i]) > maxValue)
        {
        }
    }
}

int main()
{
    int dp[1000] = {};
    for (int i = 0; i < 100; i++)
    {
        dp[i] = -1;
    }
    int items[] = {100, 3, 1, 3, 1};
    int robbedHouseMaxValue = robHouse(items, 4, dp);
    printf("%d", dp[4]);
    return 0;
}