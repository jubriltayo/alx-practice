#include "main.h"

void reverse_array(int *a, int n)
{
    int i, temp;
    n = n-1;

    while (i < n)
    {
        temp = a[i];
        a[i] = a[n];
        a[n] = temp;
        i++;
        n--;
    }
    
    
}