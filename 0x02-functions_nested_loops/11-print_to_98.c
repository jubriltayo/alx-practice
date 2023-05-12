#include "main.h"

void print_to_98(int n)
{
    int i;

    if (n == 98)
        print_helper(n);
    else if (n < 98)
    {
        for (i = n; i < 99; i++)
        {
            print_helper(i);
            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    else if (n > 98)
    {
        for (i = n; i > 97; i--)
        {
            print_helper(i);
            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    _putchar('\n');
}



void print_helper(int n)
{
    if (n < 10 )
    {
        _putchar(n + '0');
    }
    else if ((n > 9) && (n < 100))
    {
        _putchar(n / 10 + '0');
        _putchar(n % 10 + '0');
    }
    else if (n > 99)
    {
        _putchar(n / 100 + '0');
        _putchar(n / 10 + '0');
        _putchar(n % 10 + '0');
    }
}