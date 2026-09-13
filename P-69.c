// Q69: Find the second largest element in an array.
#include <stdio.h>

int main()
{
    int n, arr[100];
    int largest, second;
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = second = -2147483648;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    printf("%d", second);

    return 0;
}