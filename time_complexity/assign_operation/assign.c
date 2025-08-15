#include <stdio.h>


int main(){
   int n1, n2, result;

   n1 = 10; // O(1) -> order of 1 / O of 1
   n2 = 20;
   result = n1 + n2;
   printf(result);


   int i, n, res;

   scanf("%d", &n);

   res = 0;

   for ( i = 1; i < n; i++) // O(2n)
   {
     res = res + i;
   }
   
   printf("res = %d\n", res);




   return 0;

}