#include "main.h"

/* Putchar */
int _putchar(int c)
{
    return (write(1, &c, 1));
}

/* Print modulus */
int print_mod(va_list arg)
{
    (void)arg;

    _putchar('%');
    return (1);
}

/* Print single char */
int print_char(va_list arg)
{
    _putchar(va_arg(arg, int));
    return (1);
}

/* Print strings */
int print_str(va_list arg)
{
    int i, r_val = 0;
    char *str;
    str = va_arg(arg, char *);

    if (!str)
        str = "(nil)";

    for (i = 0; str[i]; i++)
    {
        _putchar(str[i]);
        r_val += 1;
    }
    return (r_val);
}
