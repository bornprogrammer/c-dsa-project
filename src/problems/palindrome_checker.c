#include <stdio.h>

int isPalindrome(char in[], int size);

int isPalindrome(char input[], int size)
{
    int isPalindrome = 1;
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        if (input[i] == "\n")
        {
            break;
        }
        if (input[i] != input[j])
        {
            isPalindrome = 0;
            break;
        }
    }
    return isPalindrome;
}

int main()
{
    char input[30];
    printf("Please input a string");
    scanf("%s", input);
    return 0;
}