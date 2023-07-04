#include "main.h"

int is_prime_number(int n)
{
    return check_prime(n, 2);
}

int check_prime(int n, int i)
{
    if ((n == 2) || ((n % i == 0) && (n == i)))
        return 1;
    if ((n < 2) || ((n % i == 0) && (n != i)))
        return 0;
    
    return (check_prime(n, i + 1));
}