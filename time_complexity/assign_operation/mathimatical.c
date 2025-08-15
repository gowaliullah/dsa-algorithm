#include <stdio.h>

int main(){

    int n, result; // O(1)

    scanf("%d", &n);

    result = n * ( n + 1 ) / 2;  // O(1)

    printf("result = %d\n", result );

    return 0;
}