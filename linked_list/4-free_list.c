#include "lists.h"

void free_list(list_t *head)
{
    list_t *temp;
    
    while (head)
    {
        temp = head;
        free(temp);
        head = head->next;
    }
}