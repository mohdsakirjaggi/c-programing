// Q67: Insert an element in an array at a given position.

#include <stdio.h>

int main()
{
    int n, arr[100], element, pos, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);
    scanf("%d", &pos);

    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element;
    n++;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}