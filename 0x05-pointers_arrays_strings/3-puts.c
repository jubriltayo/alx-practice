#include "main.h"

void _puts(char *str)
{
    int i;
    for (i = 0; *str != '\0'; i++)
    {
        putchar(*str);
        str++;
    }
    putchar('\n');
}