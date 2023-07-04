#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    int i = 0, j;
    unsigned int count;
    while (s[i] != '\0')
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                count++;
                break;
            }
        }
        if ((count > 0) && (s[i] != accept[j]))
        {
            break;
        }
        i++;
    }
    return count;
}