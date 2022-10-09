#include "main.h"

void reverse_array(int *a, int n)
{
   int i = 0, temp;

   n = n - 1; // 13 - 1

   while (i < n) // 0 < 12
   {
       //Recall swapping
       temp = *(a + i);
       *(a + i) = *(a + n);
       *(a + n) = temp;

       i++;
       n--;
   }
}
