#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *newNode, *temp = *head;
    int i;

    newNode = malloc(sizeof(listint_t));
    if (newNode == NULL)
        return;

    newNode->n = n;

    for (i = 0; i < idx; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;

    return newNode;
}
