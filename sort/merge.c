#include <stdio.h>

void merge_sort(int arr[], int left, int right){
    if (left >= right) {
        return;
    }

    int mid = left + (right - left) / 2;
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);

    merge(arr, left, mid, right);
    
}