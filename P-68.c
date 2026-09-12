// Q68: Delete an element from an array.

#include <stdio.h>

int main()
{
    int n, arr[100], element, i, pos = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    // Find the element
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            pos = i;
            break;
        }
    }

    // Delete the element
    if (pos != -1)
    {
        for (i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
    }

    // Display array
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}