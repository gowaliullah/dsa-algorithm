#include <stdio.h>

int linear_search(int A[], int n, int x)
{


    // time complexity -> O(n) -> only for n
    // space complexity -> O(1) -> only for reaceived array


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