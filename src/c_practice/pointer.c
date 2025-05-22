#include <stdio.h>

int main()
{
    int items[] = {1, 50, 01, 36};
    *(items + 1) = *(items + 1) + 25;
    printf("%d", *(items + 1));
}
