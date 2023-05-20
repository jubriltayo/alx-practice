#include "main.h"

int is_palindrome(char *s)
{
    return check_palindrome(s, 0);
}

int _strlen_rec(char *s)
{
    if (!(*s))
        return 0;
    
    return (1 + _strlen_rec(s + 1));
}

int check_palindrome(char *s, int i)
{
    int len = _strlen_rec(s);

    if ((!(*s)) || (i == (len / 2)))
        return 1;
    if (s[i] != s[len - 1 - i])
        return 0;

    return (check_palindrome(s, i + 1));
}