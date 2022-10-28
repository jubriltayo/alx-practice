#include "main.h"

unsigned long int _pow(unsigned int base, unsigned int power)
{
        unsigned long int num = 1;
        unsigned int i;

        for (i = 1; i <= power; i++)
            num = num * base;

        return num;
}
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned long int divisor, check;

    if (index > (sizeof(unsigned long int) * 8 - 1))
        return -1;

    divisor = 1 << index; //(truncate 1 space) then 2^index(e.g. 10) == 10 binary digits
    check = n & divisor; 
    if (check == divisor)
        return 1;
    return 0;
}
