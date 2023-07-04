#include "lists.h"

size_t free_listint_safe(listint_t **h)
{
	int flag = 0;
	listint_t *slow, *fast, *temp = NULL;
	size_t no_of_nodes = 0;

	if (!(*h))
		exit(98);

	slow = *h;
	fast = *h;

	/* Existence of loop */
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			flag = 1;
			break;
		}
	}
	if (!flag) /*No loop*/
	{
		while (*h)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			no_of_nodes++;
		}
	}
	else /*Loop exists but Find the start of the loop*/
	{
		slow = *h;
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}
		no_of_nodes = looped_free(h, slow);
	}
	return no_of_nodes;
}
size_t looped_free(listint_t **h, listint_t *loop_start)
{
	size_t no_of_nodes = 0;
	listint_t *temp = NULL;

	while (*h != loop_start) /*prints nodes in the loop except loop start*/
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		no_of_nodes++;
		/*At the end of this loop, head == loop_start cos of head traverse*/
	}
	while ((*h)->next != loop_start)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		no_of_nodes++;
	}
	free(*h);
	*h = NULL;
	no_of_nodes++;

	return no_of_nodes;
}