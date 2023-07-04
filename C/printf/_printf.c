#include "main.h"

int _printf(const char *format, ...)
{
    unsigned int i, r_val = 0;
    va_list args;
    va_start(args, format);

    for (i = 0; format[i]; i++)
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            r_val += 1;
        }
        else if (format[i + 1] == 'c')
        {
            _putchar(va_arg(args, int));
            r_val += 1;
            i++;
        }
        else if (format[i + 1] == 's')
        {
            r_val = _printstr(va_arg(args, char *));
            i++;
        }
        else if (format[i + 1] == 'd' || format[i + 1] == 'i')
        {
            r_val = _printnum(va_arg(args, int));
            i++;
        }
    }
    return r_val;
    
    va_end(args);
    return 0;
}