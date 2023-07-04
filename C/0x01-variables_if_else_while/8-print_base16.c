#include <stdio.h>

int main()
{
    char i;
    
    for (i = 48; i <= 57; i++)
    {
        putchar(i);
    }
    i = 'a';
    while (i <= 'f')
    {
        putchar(i);
        i++;
    }
    putchar('\n');

    return 0;
}