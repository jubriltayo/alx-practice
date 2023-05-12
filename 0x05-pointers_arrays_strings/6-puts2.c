#include "main.h"

void puts2(char *str)
{
    for (; *str != '\0'; str += 2)
        putchar(*str);
    putchar('\n');
}