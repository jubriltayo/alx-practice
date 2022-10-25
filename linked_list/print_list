#include "lists.h"

/* Prints all the content in the linked list */

size_t print_list(const list_t *h)
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
            if (temp->str == NULL)
            {
                printf("[%d] %s\n", 0, "(nil)");
            }
            else
            {
                printf("[%d] %s\n", temp->len, temp->str);
            }
            count++;
            temp = temp->next;
        }
    }
    return (count);
}
