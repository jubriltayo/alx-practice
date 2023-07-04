#include "main.h"


int main(void)
{
    /* Test for printing normal strings without format specifier*/
    int r_val1 = 0, r_val2 = 0;
    puts("Output using printf\n");
    r_val1 = printf("Hello, Jubril\n");
    printf("%d\n", r_val1);

    puts("-----------------------\n");

    puts("Output using _printf\n");
    r_val2 = _printf("Hello, Jubril\n");
    printf("%d\n", r_val2);

    return (0);
}