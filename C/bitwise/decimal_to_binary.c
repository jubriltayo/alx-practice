#include "main.h"

unsigned long int _pow(unsigned int base, unsigned int power)
{
        unsigned long int num = 1;
        unsigned int i;

        for (i = 1; i <= power; i++)
            num = num * base;

        return num;
}
void print_binary(unsigned long int n)
{
    unsigned long int divisor, check;
    int flag;

    flag = 0;
    divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
    /*divisor = 18446744073709551615 = 1111111111111111111111111111111111111111111111111111111111111111*/
    while (divisor != 0)
    {
        check = n & divisor;
        if (check == divisor)
        {
            flag = 1;
            putchar('1');
        }
        else if (flag == 1 || divisor == 1)
        {
            putchar('0');
        }
        divisor = divisor >> 1;
    }
}
