#include "lists.h"

size_t print_listint(const listint_t *h)
{
    const listint_t *temp;
    temp = h;
    size_t count = 0;

    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        count++;
        temp = temp->next;
    }
    return (count);

}

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}

void free_listint2(listint_t **head)
{
    listint_t *temp = *head;

    while (head != NULL)
    {
        *head = (*head)->next;
        free(temp);
    }
    head = NULL;
}

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *aux, *temp = *head;
    int i;

    if (index == 0)
    {
        *head = (*head)->next;
        free(temp);
    }
    for (i = 0; i < index; i++)
    {
        temp = temp->next;
    }

    aux = temp->next;
    temp->next = aux->next;
    free(aux);

    return 1;

}
