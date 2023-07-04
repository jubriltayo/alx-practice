#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;

    va_list list;
    va_start(list, n);
    for (i = 0; i < n - 1; i++)
    {
        if (separator)
        {
            printf("%d%s", va_arg(list, int), separator);
        }
    }
    printf("%d\n", va_arg(list, int));
    va_end(list);
}