#ifndef __MAIN_H__
#define __MAIN_H__

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

typedef struct print_format
{
    char specifier;
    int (*print)(va_list arg);
} prt;



int _printf(const char *format, ...);
int _putchar(int c);
int print_mod(va_list arg);
int print_char(va_list arg);
int print_str(va_list arg);
int print_nums(va_list arg);
int print_nums_helper(unsigned int num);
int print_bin(va_list arg);
int print_bin_helper(unsigned int num);

#endif