#include <stdio.h>

int main()
{
    int a[5], i;
    int *ptr = &a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("%d index: ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d index = %d\n", i, a[i]);
    }
    return 0;
}