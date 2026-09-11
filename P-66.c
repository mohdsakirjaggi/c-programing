// Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main()
{
    int n, arr[100], element, i, pos;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    pos = n;

    for (i = 0; i < n; i++)
    {
        if (element < arr[i])
        {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}