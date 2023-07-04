#include "dog.h"

char *_strdup(char *str)
{
    char *ptr;
    int len, i;
    if (!str)
        return NULL;
    for (len = 0; str[len]; len++)
        ;
    
    ptr = malloc(sizeof(char) * len + 1);
    if (!ptr)
        return NULL;

    for (i = 0; i < len; i++)
        ptr[i] = str[i];
    ptr[i] = '\0';
    return ptr;
}


dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *ptr;

    ptr =  malloc(sizeof(dog_t));
    if (!ptr)
        return NULL;
    
    ptr->name = _strdup(name);
    ptr->age = age;
    ptr->owner = _strdup(owner);

    if (!(ptr->name))
    {
        free(ptr);
        return NULL;
    }
    if (!(ptr->owner))
    {
        free(ptr->name);
        free(ptr);
        return NULL;
    }
    return ptr;
}