#include "variadic_functions.h"


void char_func(va_list arg)
{
    printf("%c", va_arg(arg, int));
}
void int_func(va_list arg)
{
    printf("%d", va_arg(arg, int));
}
void float_func(va_list arg)
{
    printf("%f", va_arg(arg, double));
}
void str_func(va_list arg)
{
    char *str;
    str = va_arg(arg, char *);
    
    if (!str)
        str = "(nil)";
    printf("%s", str);
}


void print_all(const char * const format, ...)
{
    int i = 0, j;
    va_list list;
    char *separator = "";

    prt format_func[] = {
        {'c', char_func},
        {'i', int_func},
        {'f', float_func},
        {'s', str_func}
    };

    va_start(list, format);
    while(format && format[i])
    {
        j = 0;
        while(j < 4)
        {
            if (format[i] == format_func[j].specifier)
            {
                printf("%s", separator);
                format_func[j].print(list);
                separator = ", ";
                break;
            }
            j++;
        }
        i++;
    }
    va_end(list);
    printf("\n");
}