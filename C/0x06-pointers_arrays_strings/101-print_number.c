#include "main.h"

void print_number(int n)
{
    int m;

    if (n < 0)
    {
        m = n * -1;
        _putchar('-');
    }
    else
    {
        m = n;
    }

    if (m / 10)
        print_number(m / 10);
    _putchar((m % 10) + '0');
}