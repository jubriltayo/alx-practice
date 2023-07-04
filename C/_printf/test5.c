#include "main.h"


int main(void)
{
    /* Test for printing character with format specifier - '%d' and '%i' */
    int r_val1 = 0, r_val2 = 0;
    int test = -346640958;
    puts("Output using printf\n");
    r_val1 = printf("%d\n", test);
    r_val1 = printf("%i\n", test);
    printf("%d\n", r_val1);

    puts("-----------------------\n");

    puts("Output using _printf\n");
    r_val2 = _printf("%d\n", test);
    r_val2 = _printf("%i\n", test);
    _printf("%d\n", r_val2);

    return (0);
}