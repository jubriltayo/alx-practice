#include "main.h"

void puts_half(char *str)
{
    int len, i;
    int mid;

    for (len = 0; str[len]; len++)
        ;
    
    mid = (len + 1) / 2;

    for (i = mid; str[i]; i++)
        putchar(str[i]);
    putchar('\n');
}