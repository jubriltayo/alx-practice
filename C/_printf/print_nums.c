#include "main.h"


int print_nums(va_list arg)
{
    int num = va_arg(arg, int);
    unsigned int n;
    if (num < 0)
    {
        _putchar('-');
        n = num * -1; /* convert to positive first before finding modulus */
        return(1 + print_nums_helper(n));
    }
    return(print_nums_helper(num));
}

int print_nums_helper(unsigned int num)
{
    unsigned int n = num, r_val = 0;

    if (num == 0)
        return 0;
    else
    {
        n = num / 10;
    }
    r_val = (1 + print_nums_helper(n));
    _putchar((num % 10) + '0');
    
    return r_val;
}