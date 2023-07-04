#include "main.h"

void print_rev(char *s)
{
    /*int i;*/
    for (; *s != '\0'; s++)
    {
        ;
    }
    s--;
    while (*s)
    {
        putchar(*s);
        s--;
    }
    
    putchar('\n');
}