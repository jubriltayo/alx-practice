#include "main.h"

int _strlen(char *str)
{
    int len;

    for (len = 0; len < str[len]; len++)
        ;
    
    return len;
}


char *str_concat(char *s1, char *s2)
{
    int len = 0, i, j;
    char *ptr;

    len = _strlen(s1) + _strlen(s2) + 1;

    ptr = malloc(sizeof(char) * len);
    if (!ptr)
        return NULL;

    for (i = 0; s1[i]; i++)
        ptr[i] = s1[i];
    for (j = 0; s2[j]; j++, i++)
        ptr[i] = s2[j];
    ptr[i] = '\0';

    return ptr;
}