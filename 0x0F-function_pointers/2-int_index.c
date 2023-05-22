#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
    int i;
    if (size <= 0)
        return -1;
    if (array && size && cmp)
    {
        for (i = 0; i < size; i++)
        {
            if (cmp(array[i]) == 1)
                return i;
        }  
    }
    return 0;
}