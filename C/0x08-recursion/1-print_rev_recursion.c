#include "main.h"

void _print_rev_recursion(char *s)
{
    /* Base case */
    if (!(*s))
    {
        return;
    }
    _print_rev_recursion(s + 1);
    _putchar(*s);
}