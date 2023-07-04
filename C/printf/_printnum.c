#include "main.h"

int _printnum(int num)
{
    int n, r_val = 1;

    if (num == 0)
        return 0;
    else
    {
        n = num / 10;
    }
    r_val = (1 + _printnum(n));
    _putchar((num % 10) + '0');
    
    return r_val;
}
