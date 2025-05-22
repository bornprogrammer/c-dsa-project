#include <stdio.h>
#include <string.h>

int isPalindrome(char *inputs);

int isPalindrome(char *inputs)
{
    int inputsLength = strlen(inputs);
    int i = 0;
    int j = inputsLength - 1;
    int isValid = 1;
    while (i <= j)
    {
        if (inputs[i] != inputs[j])
        {
            isValid = 0;
            break;
        }
        i++;
        j--;
    }
    return isValid;
}

int main()
{
    // char input[50] = {'s', 'a', 'n', 'd', 'i'};
    // char input[50] = {'e', 'y', 'e'};
    // char input[50] = {'m', 'a', 'd', 'a', 'm'};
    // char input[50] = {'d', 'e', 'i', 'f', 'i', 'e', 'd'};
    char input[50] = {'n', 'o', 'o', 'n'};
    int isPalindromeResult = isPalindrome(input);
    printf(isPalindromeResult == 1 ? "Valid" : "Not Valid");
    return 0;
}