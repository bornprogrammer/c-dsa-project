#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *val = (int *)calloc(10, sizeof(int));
    if (val == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }
    for (int i = 0; i < 14000; i++)
    {
        val[i] = i + 1;
        printf("%d", *(&val[i]));
        printf("\n");
    }
    free(val);
    val = NULL;
    return 0;
}