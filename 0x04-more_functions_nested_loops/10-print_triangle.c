#include "main.h"

void print_triangle(int size)
{
    int i, j, space;
    for (i = 0; i < size; i++)
    {
        for (space = 0; space <= size - i; space++)
            _putchar(' ');
        for (j = 0; j <= i; j++)
            _putchar('#');
        _putchar('\n');
    }
}