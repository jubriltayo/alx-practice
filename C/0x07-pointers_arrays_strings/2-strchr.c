#include "main.h"

char *_strchr(char *s, char c)
{
    /*
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            return s + i;
        i++;
    }
    return NULL;
    */

    while (*s)
    {
        if (*s == c)
            return s;
        s++;
    }
    return NULL;
}