#include "main.h"

int wordcount(char *s)
{
    int i = 0, count = 0;
    while (s[i])
    {
        for (; s[i] == ' ' && s[i]; i++)
            continue;
        if (s[i])
            count++;
        for (; s[i] != ' ' && s[i]; i++)
            continue;
    }
    return count;
}

char **strtow(char *str)
{
    char **ptr;
    int size, i = 0, j = 0, k, l, count = 0;

    if (str == NULL || *str == '\0')
        return NULL;

    size = wordcount(str) + 1;

    /* Allocate memory for the pointer to each number of words including null byte*/
    ptr = malloc(sizeof(char *) * size);
    if (!ptr)
        return NULL;

    /* Initialization */
    while (str[j])
    {
        count = 0;
        for (; str[j] == ' ' && str[j]; j++)
            continue;
        k = j;
        for (; str[j] != ' ' && str[j]; j++)
            count++;

        /* Each pointer allocates memory for each word */
        ptr[i] = malloc(sizeof(char) * count + 1);
        if (!ptr[i])
        {
            for (l = 0; l < i; l++)
                free(ptr[i]);
            free(ptr);
            return NULL;
        }
        
        /* Inilization of letters */
        for (l = 0; k < j; l++, k++)
        {
            ptr[i][l] = str[k];
        }
        ptr[i][l] = '\0';
        i++;
    }
    ptr[size - 1] = NULL;
    return ptr;
}