#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void example1()
{
    char name[36] = "Hello\0";
    char another[] = "Hello London";
    char another1[] = "Hello London";
    strcat(name, another);
    printf("%lu", strlen(name));
}

void example2()
{
    char name[50] = {'H', 'e', 'l', 'l', 'o', '\0'};
}

void example3()
{
    char str[] = "This is c string and I am really interested to read this";
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }
}

void strReversal(char str[])
{
    int leng = strlen(str) / 2;
    for (int i = 0, j = strlen(str) - 1; i < leng; i++, j--)
    {
        char first = str[i];
        str[i] = str[j];
        str[j] = first;
    }
}

int main()
{
    char someValue[] = "mothy";
    strReversal(someValue);
    printf("%s", someValue);
    return 0;
}
