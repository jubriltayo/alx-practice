#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t no_of_nodes = 0;
    while (h)
    {
        if (!h->str)
        {
            printf("[%d] %s\n", 0, "(nil)");
        }
        else
            printf("[%d] %s\n", h->len, h->str);
        h = h->next;
        no_of_nodes++;
    }
    return no_of_nodes;
}