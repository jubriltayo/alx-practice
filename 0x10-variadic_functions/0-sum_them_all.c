#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
    unsigned int i, sum = 0;
    
    if (n)
    {
        va_list list;
        va_start(list, n);
        for(i = 0; i < n; i++) 
        {
            sum += va_arg(list, int);
        }
        va_end(list);
    }
    return sum;
}