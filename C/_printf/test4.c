#include "main.h"


int main(void)
{
    /* Test for printing character with format specifier - '%s' */
    int r_val1 = 0, r_val2 = 0;
    char *test = "Tayo Jubril";
    puts("Output using printf\n");
    r_val1 = printf("%s\n", test);
    printf("%d\n", r_val1);

    puts("-----------------------\n");

    puts("Output using _printf\n");
    r_val2 = _printf("%s\n", test);
    printf("%d\n", r_val2);

    return (0);
}