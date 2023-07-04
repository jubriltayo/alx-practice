#include "main.h"

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

OR

void swap_int(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;

    return (0);
}
