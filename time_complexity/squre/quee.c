#include <stdio.h>


int main(){
   int i, j, k, n, count;


   scanf("%d", &n);

   count = 0;

   for ( i = 0; i < n; i++) {  // order of n quee ( O(n)3 )
      for (j = 0; i < n; j++)
      {
        for ( k = 0; i < n; k++)
        {
            count = count + 1;
        }
        
      }
      
   }


   /*
   
   1 -> 1
   10 -> 100
   20 -> 400
   100 -> 10000

   */
   
   printf("n = %d, count = %d\n", n, count);




   return 0;

}