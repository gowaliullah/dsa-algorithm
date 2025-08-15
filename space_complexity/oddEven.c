#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);
    
    if (num % 2 == 0) { // space com: O(1) - order of 1
        printf("%d is even.\n", num); 
    } else {
        printf("%d is odd.\n", num);
    }
    
    return 0;
}

// time com: O(1)