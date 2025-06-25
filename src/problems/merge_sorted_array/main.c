#include <stdio.h>

int *mergeAndInPlace(int *input1, int input1Length, int *input2, int input2Length)
{
    int actualLength = input1Length + input2Length - 1;
    int i = input1Length - 1;
    int j = input2Length - 1;
    while (i >= 0 && j >= 0)
    {
        if (input1[i] >= input2[j])
        {
            input1[actualLength] = input1[i--];
        }
        else
        {
            input1[actualLength] = input2[j--];
        }
        actualLength--;
    }
    while (i >= 0)
    {
        input1[actualLength--] = input1[i--];
    }
    while (j >= 0)
    {
        input1[actualLength--] = input2[j--];
    }
    return input1;
}

int main()
{
    // int input1[] = {4, 7, 10, 0, 0, 0};
    // int input2[] = {1, 2, 3};

    int input1[] = {1, 2, 3, 0, 0, 0};
    int input2[] = {2, 5, 6};
    int *mergedValue = mergeAndInPlace(input1, 3, input2, 3);
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", mergedValue[i]);
    }
    return 0;
}