#include <stdio.h>

int binay_search(int A[], int n, int x)
{

    int left, right, mid;
    
    left = 0;
    right = n - 1;



    while (left <= right)
    {
        mid = (left + right) / 2;

        if (A[mid] == x )
        {
           return mid;
        }
        if (A[mid] < x)
        {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
   return -1;
}