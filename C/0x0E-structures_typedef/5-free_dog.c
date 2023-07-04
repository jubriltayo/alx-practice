#include "dog.h"

void free_dog(dog_t *d)
{
    if (d)
    {
        free(d->owner);
        free(d->name);
        free(d);
    }
}