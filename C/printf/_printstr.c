#include "main.h"

int _printstr(char * str)
{
    int i, r_val = 0;
    for (i = 0; str[i]; i++)
    {
        _putchar(str[i]);
        r_val += 1;
    }
    return r_val;
}