#include "main.h"

int __strlen(char **av)
{
    int len = 0, i, j;
    for (i = 0; av[i]; i++)
    {
        for (j = 0; av[i][j]; j++)
            len++;
    }
    return len;
}


char *argstostr(int ac, char **av)
{
    int size = 0, i, j, k;
    char *ptr;

    if (!ac || !av)
        return NULL;
    size = __strlen(av) + ac + 1;
    ptr = malloc(sizeof(char) * size);
    if (!ptr)
        return NULL;

    for (i = 0, j = 0; av[j]; i++, j++)
    {
        for (k = 0; av[j][k]; k++, i++)
            ptr[i] = av[j][k];
        ptr[i] = '\n';
    }
    ptr[i] = '\0';

    return ptr;
}