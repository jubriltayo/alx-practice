#include "lists.h"

int pop_listint(listint_t **head)
{
    listint_t *temp;
    int data;

    if (!*head)
        return 0;
    else
    {
        temp = *head;
        data = (*head)->n;
        *head = (*head)->next;
        free(temp);
        return data;
    }
}