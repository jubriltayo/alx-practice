#include "lists.h"

size_t list_len(const list_t *h)
{
    size_t no_of_nodes = 0;
    while (h)
    {
        h = h->next;
        no_of_nodes++;
    }
    return no_of_nodes;
}