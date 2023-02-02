#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
    int flag = 0;
    const listint_t *slow, *fast;
    size_t no_of_nodes = 0;

    if (!head)
        exit (98);

    slow = head;
    fast = head;

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
        while (head)
        {
            printf("[%p] %d\n", (void *)head, head->n);
            head = head->next;
            no_of_nodes++;
        }
    }
    else /*Loop exists but Find the start of the loop*/
    {
        slow = head;
        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        no_of_nodes = looped_printing(head, slow);
    }
    return no_of_nodes;
}
size_t looped_printing(const listint_t *head, const listint_t *loop_start)
{
    size_t no_of_nodes = 0;

    while (head != loop_start) /*prints nodes in the loop except loop start*/
    {
        printf("[%p] %d\n", (void *)head, head->n);
        head = head->next;
        no_of_nodes++;
        /*At the end of this loop, head == loop_start cos of head traverse*/
    }
    while (head->next != loop_start)
    {
        printf("[%p] %d\n", (void *)head, head->n); /*1st time - prints head = loop start*/
        head = head->next;
        no_of_nodes++;
    }
    printf("[%p] %d\n", (void *)head, head->n); /*print the final node b4 loop start*/
    no_of_nodes++;
    printf("-> [%p] %d\n", (void *)loop_start, loop_start->n);

    return no_of_nodes;
}