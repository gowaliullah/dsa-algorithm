#include <stdio.h>

int linear_search(int A[], int n, int x)
{

    int i;

    for (i = 0; i < n; i++)
    {
        if (A[i] == x)
        {
            return i;
        }
    }

    i = -1;

    return 0;
}