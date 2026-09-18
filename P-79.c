// : Perform diagonal traversal of a matrix.

#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j, sum;

    scanf("%d %d", &r, &c);

    // Read matrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonal traversal
    for (sum = 0; sum <= r + c - 2; sum++)
    {
        if (sum % 2 == 0)
        {
            for (i = sum; i >= 0; i--)
            {
                j = sum - i;

                if (i < r && j < c)
                    printf("%d ", a[i][j]);
            }
        }
        else
        {
            for (j = sum; j >= 0; j--)
            {
                i = sum - j;

                if (i < r && j < c)
                    printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}