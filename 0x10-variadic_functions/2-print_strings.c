#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    char * string;

    va_list list;
    va_start(list, n);
    for (i = 0; i < n - 1; i++)
    {
        string = va_arg(list, char *);
        if (separator)
        {
            if (!string)
                string = "(nil)";    
            printf("%s%s", string, separator);
        }
        else
        {
            if (!string)
                string = "(nil)";    
            printf("%s", string);
            
        }
    }
    printf("%s\n", va_arg(list, char *));
    va_end(list);
}