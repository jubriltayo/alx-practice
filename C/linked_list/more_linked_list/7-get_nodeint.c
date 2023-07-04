#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int no_of_nodes = 0;

    if (!index)
        return NULL;

    while (no_of_nodes != index)
    {
        head = head->next;
        no_of_nodes++;
    }
    return head;
}

/*
OR
{
    while (head && index)
    {
        head = head->next;
        index--;
    }
    return head;  
}
*/