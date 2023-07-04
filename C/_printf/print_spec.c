#include "main.h"

int print_bin(va_list arg)
{
    int num = va_arg(arg, int);

    return(print_bin_helper(num)); 
}

int print_bin_helper(unsigned int num)
{
    unsigned int n = num, r_val = 0;
    if (num == 0)
    {
        return 0;
    }
    else
    {
        n = num / 2;
    }
    r_val = (1 + print_bin_helper(n));
    _putchar((num % 2) + '0');

    return (r_val);
}