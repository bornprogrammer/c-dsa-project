#include <stdio.h>

int robHouse(int *houses, int index)
{
    if (index == 0)
    {
        return houses[0];
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
        int val1 = houses[index] + robHouse(houses, index - 2);
        int val2 = robHouse(houses, index - 1);
        if (val1 > val2)
        {
            return val1;
        }
        return val2;
    }
}

int main()
{
    int items[] = {100, 3, 1, 3, 1};
    int robbedHouseMaxValue = robHouse(items, 4);
    printf("%d", robbedHouseMaxValue);
    return 0;
}