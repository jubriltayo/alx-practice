#include "main.h"


int main(void)
{
    /* Test for printing character with format specifier - '%b' */
    int r_val = 0;
    int test = 98;

    puts("Output using _printf\n");
    r_val = _printf("%b\n", test);
    _printf("%d\n", r_val);

    return (0);
}