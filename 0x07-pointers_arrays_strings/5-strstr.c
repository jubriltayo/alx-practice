#include "main.h"

char *_strstr(char *haystack, char *needle)
{
    int i;

    for (i = 0; haystack[i] != '\0'; i++)
    {
        if (haystack[i] == needle[0])
        {
            return haystack + i;
            break;
        }
    }
    return NULL;
}