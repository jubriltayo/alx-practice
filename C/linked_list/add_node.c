list_t *add_node(list_t **head, const char *str)
{
    list_t *newNode;
    size_t count;

    newNode = malloc(sizeof(list_t));

    if (newNode == NULL)
        return;

    newNode->str = strdup(str);

    /* traverse the word for length */
    for (count = 0; str[count]; count++)
        ;

    newNode->len = count;
    newNode->next = *head;
    *head = newNode;

    return *head;
}
