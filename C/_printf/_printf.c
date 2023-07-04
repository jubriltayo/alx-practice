#include "main.h"


int _printf(const char *format, ...)
{
    int i = 0, j, arr_len = 0, flag = 0, r_val = 0; /* r_val is the length of the entire string*/
    va_list list;
    prt format_funcs[] = {
        {'%', print_mod},
        {'c', print_char},
        {'s', print_str},
        {'d', print_nums},
        {'i', print_nums},
        {'b', print_bin}
    };

    /* return error when NULL was passed `_printf()` OR when only "%" was passed `_printf("%")` */
    if (!format || (!format[i] == '%' && format[i + 1] == '\0'))
        return (-1);

    va_start(list, format);
    while (format[i])
    {
        if (format[i] != '%') /* Prints only string without format specifier `_printf("Tayo Jubril")` */
        {
            _putchar(format[i]);
            r_val += 1;
        }
        else /* Print with a format specifier */
        {
            i++; /* skip '%' and jump to the next format */
            arr_len = (sizeof(format_funcs) / sizeof(format_funcs[0]));
            for (j = 0; j < arr_len; j++)
            {
    
                if (format[i] == format_funcs[j].specifier)
                {
                    r_val += format_funcs[j].print(list);
                    flag = 1; /* indicates specificer was found in the array */
                    break;
                }
            }
            // if (flag == 0) /* if specifier not found int array, print '%' as string */
            // {
            //     // Vague
            //     _putchar(format[--i]);
            //     r_val++;
            // }
        }
        i++;
    }
    va_end(list);
    return(r_val);
}