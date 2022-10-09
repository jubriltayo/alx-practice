#include "main.h"

char *_strchr(char *s, char c)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (c <= s[i])
        {
            s = s + i;
            return s;
        }
    }
    return ('\0');
}
