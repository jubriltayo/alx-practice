#include "main.h"

char *create_array(unsigned int size, char c)
{
    char *ptr;
    unsigned int i;

    if (size == 0)
        return NULL;

    ptr = malloc(sizeof(char) * size);

    if (!ptr)
        return NULL;
    
    for (i = 0; i < size; i++)
        ptr[i] = c; 
    
    return ptr;
}