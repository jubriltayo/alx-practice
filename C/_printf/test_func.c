#include "main.h"

int print_bin(int num)
{
    int n, r_val = 0;
    if (num == 0)
    {
        return 0;
    }
    else
    {
        n = num / 2;
    }
    r_val = (1 + print_bin(n));
    _putchar(num % 2 + '0');
    return (r_val);
}

int main(void)
{
    int test = 17, r;

    r = print_bin(test);
    printf("%d", r);
    return (0);
}