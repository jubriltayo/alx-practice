#ifndef __VARIADIC_FUNCTIONS_H__
#define __VARIADIC_FUNCTIONS_H__

#include <stdarg.h>
#include <stdio.h>

typedef struct print_format
{
    char specifier;
    void (*print)(va_list arg);
} prt;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void char_func(va_list arg);
void int_func(va_list arg);
void float_func(va_list arg);
void str_func(va_list arg);

#endif