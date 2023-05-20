#include "main.h"

int _sqrt_recursion(int n)
{
    return _sqrt_recursion_helper(n, 0);
}

int _sqrt_recursion_helper(int n, int num)
{
    if (num * num == n)
        return num;
    if (num * num > n)
        return -1;

    return (_sqrt_recursion_helper(n, num + 1));
}