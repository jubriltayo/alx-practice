#include "main.h"

char *_strpbrk(char *s, char *accept)
{
    int i = 0, j;
    while (s[i])
    {
        for (j = 0; s[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                return s + i;
            }
        }
        i++;
    }
    return NULL;

}