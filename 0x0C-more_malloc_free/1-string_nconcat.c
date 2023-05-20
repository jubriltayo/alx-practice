#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len_s1, len_s2, i, j, size;
    char *ptr;

    for (len_s2 = 0; s2[len_s2]; len_s2++)
        ;
    if (n >= len_s2)
        n = len_s2;
    for (len_s1 = 0; s1[len_s1]; len_s1++)
        ;
    if (!s1)
        len_s1 = 0;
    if (!s2)
        n = 0;

    size = len_s1 + n + 1;

    ptr = malloc(sizeof(char) * size);
    if (!ptr)
        return NULL;

    for (i = 0; i < len_s1; i++)
    {
        ptr[i] = s1[i];
    }
    for (j = 0; j < n; j++, i++)
    {
        ptr[i] = s2[j];
    }
    ptr[i] = '\0';

    return ptr;
}