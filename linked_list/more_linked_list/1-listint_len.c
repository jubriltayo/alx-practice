#include "lists.h"

size_t listint_len(const listint_t *h)
{
    size_t no_of_nodes = 0;

    while (h)
    {
        h = h->next;
        no_of_nodes++;
    }
    return no_of_nodes;
}