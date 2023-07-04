#include <stdio.h>
#include "main.h"

int print_last_digit(int n)
{
    int lastd;
    if (n < 0)
    {
        n *= -1;
    }

    lastd = n % 10;

    _putchar(lastd + '0');
    return (lastd);
    
}