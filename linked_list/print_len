#include "lists.h"

/* Print only number of nodes */

size_t list_len(const list_t *h)
{
    const list_t *temp;
    temp = h;
    size_t count = 0;

    if (h == NULL)
        return;
    else
    {
        while(temp != NULL)
        {

            count++;
            temp = temp->next;
        }
    }
    return (count);
}
