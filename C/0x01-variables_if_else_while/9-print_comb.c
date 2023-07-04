#include <stdio.h>

int main()
{
    int i = 48;

    while (i <= 57)
    {
        putchar (i);
        if (i != 57)
        {
            putchar (',');
            putchar (' ');
        }
        i++;
    }
    putchar('\n');
}