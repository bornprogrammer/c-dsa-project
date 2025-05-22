#include <stdio.h>

int sumOfDigit(int val);

int sumOfDigit(int val)
{
    if (val > 0)
    {
        int sum = 0;
        while (val != 0)
        {
            int moduloVal = val % 10;
            sum = sum + moduloVal;
            val = val / 10;
        }
        return sum;
    }
    return 0;
}

int main()
{
    int input;
    scanf("%d", &input);
    int sumOfDigitVal = sumOfDigit(input);
    printf("your input is %d\n", sumOfDigitVal);
    return 0;
}